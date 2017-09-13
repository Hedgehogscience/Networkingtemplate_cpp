/*
    Initial author: Convery
    Started: 2017-9-13
    License: Apache 2.0
*/

#pragma once
#include "../../Stdinclude.h"

namespace Memprotect
{
    void Protectrange(void *Address, const size_t Length, unsigned long Oldprotection);
    unsigned long Unprotectrange(void *Address, const size_t Length);
}
