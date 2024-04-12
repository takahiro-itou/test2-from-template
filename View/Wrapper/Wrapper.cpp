// This is the main DLL file.

#include "stdafx.h"

#include <msclr/marshal_cppstd.h>

#include "Wrapper.h"

#include <string>

namespace  SampleWrapper  {
namespace  Common  {

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （デフォルトコンストラクタ）。
//

SampleDocument::SampleDocument()
    : m_ptrObj { new WrapTarget() }
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

SampleDocument::~SampleDocument()
{
    this->!SampleDocument();
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （ファイナライザ）。
//

SampleDocument::!SampleDocument()
{
    if ( this->m_ptrObj ) {
        delete  this->m_ptrObj;
        this->m_ptrObj  = nullptr;
    }
}

//----------------------------------------------------------------
//    入力メッセージ中に含まれるアルファベットを数える。
//

int SampleDocument::testFunc1(System::String^ message)
{
    std::string tmp = msclr::interop::marshal_as<std::string>(message);
    return ( this->m_ptrObj->testFunc1(tmp) );
}

}   //  End of namespace  Common
}   //  End of namespace  SampleWrapper
