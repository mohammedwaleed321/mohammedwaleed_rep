#include <iostream>
#include <windows.h>
#include "User.h"
using namespace std;
int main()
{
    User u1;
    while(u1.getStates())
    {
        Sleep(1000);
        system("cls"); //for windows only
        u1.check_choices();
    }
    return 0;
}
