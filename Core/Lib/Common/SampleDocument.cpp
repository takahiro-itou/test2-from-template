//  -*-  coding: utf-8-with-signature;  mode: c++  -*-  //
/*************************************************************************
**                                                                      **
**                  ---  DocView Template Project  ---                  **
**                                                                      **
**          Copyright (C), 2017-2022, Takahiro Itou                     **
**          All Rights Reserved.                                        **
**                                                                      **
**          License: (See COPYING or LICENSE files)                     **
**          GNU Affero General Public License (AGPL) version 3,         **
**          or (at your option) any later version.                      **
**                                                                      **
*************************************************************************/

/**
**      An Implementation of SampleDocument class.
**
**      @file       Common/SampleDocument.cpp
**/

#include    "Sample/Common/SampleDocument.h"


SAMPLE_NAMESPACE_BEGIN
namespace  Common  {

namespace  {

}   //  End of (Unnamed) namespace.


//========================================================================
//
//    SampleDocument  class.
//

//========================================================================
//
//    Constructor(s) and Destructor.
//

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （デフォルトコンストラクタ）。

SampleDocument::SampleDocument()
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

SampleDocument::~SampleDocument()
{
}

//========================================================================
//
//    Public Member Functions (Implement Pure Virtual).
//

//========================================================================
//
//    Public Member Functions (Overrides).
//

//========================================================================
//
//    Public Member Functions (Pure Virtual Functions).
//

//========================================================================
//
//    Public Member Functions (Virtual Functions).
//

//----------------------------------------------------------------
//    入力メッセージ中に含まれるアルファベットを数える。
//

int
SampleDocument::testFunc1(
        const  std::string  &message)  const
{
    const   size_t  len = message.length();
    size_t  cnt = 0;
    for ( size_t i = 0; i < len; ++ i ) {
        const  char tmp = message[i];
        if ( ('A' <= tmp) && (tmp <= 'Z') ) {
            ++ cnt;
        } else if ( ('a' <= tmp) && (tmp <= 'z') ) {
            ++ cnt;
        }
    }

    return ( static_cast<int>(cnt) );
}

//========================================================================
//
//    Public Member Functions.
//

//========================================================================
//
//    Accessors.
//

//========================================================================
//
//    Protected Member Functions.
//

//========================================================================
//
//    For Internal Use Only.
//

}   //  End of namespace  Common
SAMPLE_NAMESPACE_END
