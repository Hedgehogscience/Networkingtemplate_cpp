/*
    Initial author: Convery
    Started: 2017-9-13
    License: Apache 2.0
*/

#pragma once
#include "../../Stdinclude.h"
#pragma warning (disable : 4840)

inline std::string va(std::string Format, ...)
{
    auto Resultbuffer = std::make_unique<char[]>(2049);
    std::va_list Varlist;

    // Create a new string from the arguments and truncate as needed.
    va_start(Varlist, Format);
    std::vsnprintf(Resultbuffer.get(), 2048, Format.c_str(), Varlist);
    va_end(Varlist);

    return std::string(Resultbuffer.get());
}
