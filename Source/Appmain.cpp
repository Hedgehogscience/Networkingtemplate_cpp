/*
    Initial author: Convery
    Started: 2017-9-13
    License: Apache 2.0
*/

#include "Stdinclude.h"
#include "Servers/Servers.h"

// Delete the last sessions log on startup for windows.
#if defined (_WIN32)
    namespace { struct Deletelog { Deletelog() { Clearlog(); } }; static Deletelog Deleted{}; }
#endif

// Network exports.
extern "C"
{
    EXPORT_ATTR IServer *Createserver(const char *Hostname)
    {
        /*
            if(std::strstr(Hostname, "auth.domain.com"))
                return new MyAuthserver();
        */

        return nullptr;
    }
}

// Default entrypoint for windows.
#ifdef _WIN32
BOOLEAN WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
    switch (nReason)
    {
        case DLL_PROCESS_ATTACH:
        {
            // Rather not handle all thread updates.
            DisableThreadLibraryCalls(hDllHandle);
            break;
        }
    }

    return TRUE;
}
#endif
