/*
    Initial author: Convery
    Started: 2017-04-27
    License: Apache 2.0
*/

#include "StdInclude.h"
#include "Servers/Servers.h"

// Clear the logfile on startup so we only save this session.
namespace { struct Deletelog { Deletelog() { Clearlogfile(); } }; static Deletelog Deleted{}; }

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
#include <Windows.h>
BOOLEAN WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
    switch ( nReason )
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
