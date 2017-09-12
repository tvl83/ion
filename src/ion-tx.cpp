
// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2017 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#if defined(HAVE_CONFIG_H)
#include "config/ion-config.h"
#endif

#include "init.h"

#include <univalue.h>

#include <boost/algorithm/string/predicate.hpp>
#include <boost/algorithm/string.hpp>

static const int CONTINUE_EXECUTION=-1;

//////////////////////////////////////////////////////////////////////////////
//
// Start
//
static int AppInitRawTx(int argc, char* argv[])
{
    return CONTINUE_EXECUTION;
}

static int CommandLineRawTx(int argc, char* argv[])
{
    std::string strPrint;
    int nRet = 0;

    return nRet;
}
int main(int argc, char* argv[])
{

    try {
        int ret = AppInitRawTx(argc, argv);
        if (ret != CONTINUE_EXECUTION)
            return ret;
    }
    catch (std::exception& e) {
        PrintExceptionContinue(&e, "AppInitRawTx()");
        return EXIT_FAILURE;
    } catch (...) {
        PrintExceptionContinue(NULL, "AppInitRawTx()");
        return EXIT_FAILURE;
    }

    int ret = EXIT_FAILURE;
    try {
        ret = CommandLineRawTx(argc, argv);
    }
    catch (std::exception& e) {
        PrintExceptionContinue(&e, "CommandLineRawTx()");
    } catch (...) {
        PrintExceptionContinue(NULL, "CommandLineRawTx()");
    }
    return ret;
}
