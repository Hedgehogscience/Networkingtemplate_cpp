/*
    Initial author: Convery (tcn@ayria.se)
    Started: 2017-9-13
    License: MIT
*/

#pragma once
#include "../../Stdinclude.h"

namespace Memprotect
{
    void Protectrange(void *Address, const size_t Length, unsigned long Oldprotection);
    unsigned long Unprotectrange(void *Address, const size_t Length);
}
