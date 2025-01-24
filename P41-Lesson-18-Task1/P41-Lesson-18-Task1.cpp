#include "Computer.h"

int main()
{
    Computer* arr = new Computer[5]{
        {"HP", 2.4, 8, false, 20'000},
        {"Acer", 3.2, 16, true, 60'000},
        {"HP 2.0", 1.4, 8, false, 15'000},
        {"Dell", 3.4, 32, true, 75'000},
        {"Asus", 2.6, 16, true, 35'000}
    };

    for (int i = 0; i < 5; i++)
    {
        arr[i].showInfo();
    }
}
