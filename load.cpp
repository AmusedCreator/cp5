#include <windows.h>
#include "load.h"
#include <cstdio>
#include <iostream>

typedef void (*smth_t)(void);

void LoadRun(const char *const s) {
    HINSTANCE lib;
    lib = LoadLibrary(s);
    if (!lib) {
        printf("cannot open library '%s'\n", s);
        return;
    }
    smth_t pFunc = reinterpret_cast<smth_t>(GetProcAddress((HINSTANCE) lib, "smth"));
    if (pFunc == nullptr) {
        printf("cannot load function smth\n");
        std::cout << GetLastError() << std::endl;
    } else {
        pFunc();
    }
    FreeLibrary((HINSTANCE) lib);
}