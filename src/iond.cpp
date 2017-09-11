// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2017 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#if defined(HAVE_CONFIG_H)
#include "config/ion-config.h"
#endif

#include "rpcserver.h"
#include "init.h"
#include <boost/algorithm/string/predicate.hpp>


void WaitForShutdown(boost::thread_group* threadGroup)
{
    bool fShutdown = ShutdownRequested();
    // Tell the main threads to shutdown.
    while (!fShutdown)
    {
        MilliSleep(200);
        fShutdown = ShutdownRequested();
    }
    if (threadGroup)
    {
        threadGroup->interrupt_all();
        threadGroup->join_all();
    }
}

//////////////////////////////////////////////////////////////////////////////
//
// Start
//
bool AppInit(int argc, char* argv[])
{
    boost::thread_group threadGroup;

    bool fRet = false;
    fHaveGUI = false;
    try
    {
        //
        // Parameters
        //
        // If Qt is used, parameters/ioncoin.conf are parsed in qt/ion.cpp's main()
        ParseParameters(argc, argv);
        if (!boost::filesystem::is_directory(GetDataDir(false)))
        {
            fprintf(stderr, "Error: Specified directory does not exist\n");
            Shutdown();
	    return false;
        }
        ReadConfigFile(mapArgs, mapMultiArgs);

        if (mapArgs.count("-?") || mapArgs.count("--help"))
        {
            std::string strUsage = strprintf(_("%s Daemon"), _(PACKAGE_NAME)) + " " + _("version") + " " + FormatFullVersion() + "\n";
            
            strUsage += "\n" + _("Usage:") + "\n" +
                  "  iond [options]                     " + strprintf(_("Start %s Daemon"), _(PACKAGE_NAME)) + "\n";

            strUsage += "\n" + HelpMessage();

            fprintf(stdout, "%s", strUsage.c_str());
            return false;
        }

/*
        // Command-line RPC
        for (int i = 1; i < argc; i++)
            if (!IsSwitchChar(argv[i][0]) && !boost::algorithm::istarts_with(argv[i], "ion:"))
                fCommandLine = true;
*/
        if (!SelectParamsFromCommandLine()) {
            fprintf(stderr, "Error: invalid combination of -regtest and -testnet.\n");
            return false;
        }
        // Error out when loose non-argument tokens are encountered on command line
        for (int i = 1; i < argc; i++) {
            if (!IsSwitchChar(argv[i][0])) {
                fprintf(stderr, "Error: Command line contains unexpected token '%s', see iond -h for a list of options.\nAlternatively, see ion-cli for wallet commands.\n", argv[i]);
                exit(EXIT_FAILURE);
            }
        }
        
#if !WIN32
        fDaemon = GetBoolArg("-daemon", false);
        if (fDaemon)
        {
            // Daemonize
            pid_t pid = fork();
            if (pid < 0)
            {
                fprintf(stderr, "Error: fork() returned %d errno %d\n", pid, errno);
                return false;
            }
            if (pid > 0) // Parent process, pid is child process id
            {
                CreatePidFile(GetPidFile(), pid);
                return true;
            }
            // Child process falls through to rest of initialization

            pid_t sid = setsid();
            if (sid < 0)
                fprintf(stderr, "Error: setsid() returned %d errno %d\n", sid, errno);
        }
#endif

		fRet = AppInit2(threadGroup);
    }
    catch (std::exception& e) {
        PrintException(&e, "AppInit()");
    } catch (...) {
        PrintException(NULL, "AppInit()");
    }

    if (!fRet)
    {
        threadGroup.interrupt_all();
        // threadGroup.join_all(); was left out intentionally here, because we didn't re-test all of
        // the startup-failure cases to make sure they don't result in a hang due to some
        // thread-blocking-waiting-for-another-thread-during-startup case
    } else {
        WaitForShutdown(&threadGroup);
    }
    Shutdown();

    return fRet;
}

extern void noui_connect(); 
int main(int argc, char* argv[])
{
    bool fRet = false;

    // Connect iond signal handlers
    noui_connect();

    fRet = AppInit(argc, argv);

    if (fRet && fDaemon)
        return 0;

    return (fRet ? 0 : 1);
}
