#include <iostream>
#include "load.h"

int main() {

    int menu;

    std::cout << "choose lib" << std::endl
    << "1.array" << std::endl
    << "2.matrix" << std::endl
    << "3.quit"<< std::endl;
    while (menu != 3) {
        std::cin>>menu;
        switch (menu) {
            case 1:
                LoadRun("lib1.dll");
                break;
            case 2:
                LoadRun("lib2");
                break;
        }
    }

    return 0;
}
