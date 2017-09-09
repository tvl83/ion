
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

    if (argc<2 || mapArgs.count("-?") || mapArgs.count("-h") || mapArgs.count("-help")) {
        std::string strUsage = strprintf(_("%s RPC client version"), _(PACKAGE_NAME)) + " " + FormatFullVersion() + "\n";
        strUsage += "\n" + _("Usage:") + "\n" +
                "  ion-cli [options] <command> [params]  " + strprintf(_("Send command to %s"), _(PACKAGE_NAME)) + "\n" +
                "  ion-cli [options] -named <command> [name=value] ... " + strprintf(_("Send command to %s (with named arguments)"), _(PACKAGE_NAME)) + "\n" +
                "  ion-cli [options] help                " + _("List commands") + "\n" +
                "  ion-cli [options] help <command>      " + _("Get help for a command") + "\n";

        strUsage += "\n";

        fprintf(stdout, "%s", strUsage.c_str());
        if (argc < 2) {
            fprintf(stderr, "Error: too few parameters\n");
            return EXIT_FAILURE;
        }
        return EXIT_SUCCESS;
    }

    if (!boost::filesystem::is_directory(GetDataDir(false)))
    {
        fprintf(stderr, "Error: Specified data directory \"%s\" does not exist.\n", mapArgs["-datadir"].c_str());
        return false;
    }
    ReadConfigFile(mapArgs, mapMultiArgs);

    // Check for -testnet or -regtest parameter (BaseParams() calls are only valid after this clause)
    if (!SelectParamsFromCommandLine()) {
        fprintf(stderr, "Error: invalid combination of -regtest and -testnet.\n");
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

