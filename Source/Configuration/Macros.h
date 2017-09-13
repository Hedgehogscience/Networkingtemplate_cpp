/*
    Initial author: Convery
    Started: 2017-9-13
    License: Apache 2.0
*/

#pragma once

// Debug information logging.
#if defined (NDEBUG)
    #define Printfunction()
    #define Debugprint(string)
#else
    #define Printfunction() Logprefixed(__FUNCTION__, "Call to")
    #define Debugprint(string) Logprefixed(string, "  Debug")
#endif

// General information.
#define Infoprint(string) Logprefixed(string, "  Info")
#define vaprint(format, ...) Logprint(va(format, __VA_ARGS__))
