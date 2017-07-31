// Copyright (c) 2009-2017 The Bitcoin developers
// Copyright (c) 2017 CEVAP Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "proofs.h"
#include "txdb.h"
#include "main.h"
#include "uint256.h"

static const int nCheckpointSpan = 5000;

namespace Checkpoints
{
	typedef std::map<int, uint256> MapCheckpoints;
    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        (       0,	Params().HashGenesisBlock())
        (       1,	uint256("0x000000ed2f68cd6c7935831cc1d473da7c6decdb87e8b5dba0afff0b00002690") ) // Premine
        (      10,	uint256("0x00000032f5a96d31d74b380c0336445baccb73a01bdbedec868283019bad7016") ) // Confirmation of Premine
        (      22,	uint256("0x00000002e04f91402d78b84433ec744aacac5c40952b918fe09a7d623ac33967") )
        (      32,	uint256("0x0000001880da8fd09cc6f5e93315135fe686eb49f9054c807fa810d56ebb013b") )
        (      35,	uint256("0x0000000af6204fd43bb9cafea1dd192c245979d4dd7bde19efb92f633589ade5") )
        (      45,	uint256("0x00000006d6b9e9fba4dee10bc63ca7ea764c80c2b9c4fa6ddedb944eb288a371") )
	(    1000,	uint256("0x0000000144b22b0af9bced65256d5eccc4e3f112a89bdb0f08ab8dc2a6145b56") ) // Last POW Block
	(    2000,	uint256("0xf106321d5ec2d8e6f1d544813a7f90af7e823b247b6a9c0d5cd8336fc5853a37") ) 
	(    5000,	uint256("0x27eed0937b19a7910e510a7a247d8ddbafbca2208124199461e7d1c340df5d27") ) 
	(   10000,	uint256("0xee45d28d82b88fafae9ec2e4644c5cb7ed0da539f9b21fdb7bfd1e648b7dd573") ) 
	(   20000,	uint256("0xf7f8349de18b3e693310f0bb99001cd4ac49373f07b9a6d0c24bcb2c7a2724c3") ) 
	(   30000,	uint256("0x6dd61c81e2baeff3ec18ed7e1e32f10c765a23799870b8cac5528488d8a23bed") ) 
	(   40000,	uint256("0xc8a2aa8c777c1cc1c714da80ac63dfd2dc45d3e519c5dd85fb0a65ee9cd22f99") ) 
	(   50000,	uint256("0xf09a62c4b227fd6f48ec3b173295cc38f0bb7d5479e5a7ce11965e21cf3f897d") ) 
	(   60000,	uint256("0x2d472a8a8411d1a13adaa4eacf950bc1c44e8cd43dcafab14fef9df38d36b7f2") ) 
	(   70000,	uint256("0x50f75376395c9232965de69508cfda2b56a4cfa62ecb0c9e369e71171552cd81") ) 
	(   80000,	uint256("0x5a11e5a03f8fbc721c12f98e03e7eb8e8a2524d91b07b02f9a4fd171962b548b") ) 
	(   90000,	uint256("0x4547cc73a518773c84f2f66b6d56721de36c22749aa82c97fb44226245b40cc6") ) 
	(  100000,	uint256("0xa5a4e8f2554cda59955e0117fd71245e1f6d73a30ab420a3d3731384dcbcfffc") )
	(  150000,	uint256("0x13d5c4880d6005fe950ed447a0dcbe4613761b077e1b067048fc1893eaaf21c9") )
	(  176500,	uint256("0xe51d463e2fa39af6d57f54a9691507025163ec777d6ea9f3053b216876763398") ) // Fork June 2017
	(  180000,	uint256("0xe87b33c6bdda1de6f9d697c7751d706e33e531325aea8352958812a1e7bd1216") ) // Fork June 2017
	(  181150,	uint256("0xb11fcb73338b588a721cced4c23efa134a33b10b920f5abfb1f6d5f702e05421") ) // Fork June 2017
	(  191150,	uint256("0x25c875518d7b373609f4a48d33844b38b82363378ba74919c4402ae2cec84702") ) // 2.1.6.2
	(  231680,      uint256("0xfb876d344b7667cd585eeac9fcaafce9a46aa706105c679b2951430cdfac4a90") ) // 2.1.6.2
;

    static MapCheckpoints mapCheckpointsTestnet =
	boost::assign::map_list_of
	(       0,      Params().HashGenesisBlock())
	(       1,      uint256("0x000000b86fdd7f2ae9e9973e73790492989113075a2d5c581495ab7bb2ad5711") ) // First block 
	(      10,      uint256("0x0000008c29a7d680710d1cc821d79f33ba0159bc26d9e233bccfabd668b0430e") ) // Confirmation of first block
	(     300,      uint256("0x000000125e3e3d005aa72281e02b4ebaabc2fa9aed817b9365a8d29bb7901c10") ) // Last POW Block
	(   75000,      uint256("0x20faec3994dac57fb88748e29139974522c91036e1bf8ff204c769a90fab5a12") ) // Fork June 2017
	(   85000,      uint256("0x43ee28cd1f804dafe05ef120569726e50e9e6f2b634746925742cbd9f738c201") ) // Fork June 2017
	(   88800,      uint256("0x2807b46cbfa28a2d4854215b40f4db64b62fc71a1d010844d67d7c03888ce692") ) // Fork June 2017
;   

    bool CheckHardened(int nHeight, const uint256& hash)
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        MapCheckpoints::const_iterator i = checkpoints.find(nHeight);
        if (i == checkpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        if (checkpoints.empty())
            return 0;
        return checkpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        MapCheckpoints& checkpoints = (TestNet() ? mapCheckpointsTestnet : mapCheckpoints);

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, checkpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }

    // Automatically select a suitable sync-checkpoint 
    const CBlockIndex* AutoSelectSyncCheckpoint()
    {
        const CBlockIndex *pindex = pindexBest;
        // Search backward for a block within max span and maturity window
        while (pindex->pprev && pindex->nHeight + nCheckpointSpan > pindexBest->nHeight)
            pindex = pindex->pprev;
        return pindex;
    }

    // Check against synchronized checkpoint
    bool CheckSync(int nHeight)
    {
        const CBlockIndex* pindexSync = AutoSelectSyncCheckpoint();
        if (nHeight <= pindexSync->nHeight){
            return false;
        }
        return true;
    }
}
