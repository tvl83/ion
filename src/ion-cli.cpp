
// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2017 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#if defined(HAVE_CONFIG_H)
#include "config/ion-config.h"
#endif

#include "rpcserver.h"
#include "rpcclient.h"
#include "init.h"
#include <boost/algorithm/string/predicate.hpp>

//////////////////////////////////////////////////////////////////////////////
//
// Start
//
static bool AppInitRPC(int argc, char* argv[])
{
    //
    // Parameters
    //
    ParseParameters(argc, argv);

    if (!boost::filesystem::is_directory(GetDataDir(false)))
    {
        fprintf(stderr, "Error: Specified data directory \"%s\" does not exist.\n", mapArgs["-datadir"].c_str());
        return false;
    }
    ReadConfigFile(mapArgs, mapMultiArgs);

    if (argc<2 || mapArgs.count("-?") || mapArgs.count("--help"))
    {
        // First part of help message is specific to RPC client
        std::string strUsage = _("Ion RPC client version") + " " + FormatFullVersion() + "\n\n" +
            _("Usage:") + "\n" +
              "  ion-cli [options] <command> [params]  " + _("Send command to Ion server") + "\n" +
              "  ion-cli [options] help                " + _("List commands") + "\n" +
              "  ion-cli [options] help <command>      " + _("Get help for a command") + "\n";

//  TODO: Create different help messages for different binaries              
//        strUsage += "\n" + HelpMessage(HMM_ION_CLI);
        strUsage += "\n";

        fprintf(stdout, "%s", strUsage.c_str());
        return false;
    }

    return true;
}

int main(int argc, char* argv[])
{
    try
    {
        if(!AppInitRPC(argc, argv))
            return 1;
    }
    catch (std::exception& e) {
        PrintExceptionContinue(&e, "AppInitRPC()");
    } catch (...) {
        PrintExceptionContinue(NULL, "AppInitRPC()");
    }

    try
    {
        if(!CommandLineRPC(argc, argv))
            return 1;
    }
    catch (std::exception& e) {
        PrintExceptionContinue(&e, "CommandLineRPC()");
    } catch (...) {
        PrintExceptionContinue(NULL, "CommandLineRPC()");
    }
    return 0;
}

