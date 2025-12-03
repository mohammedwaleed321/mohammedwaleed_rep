/*
countdown timer
*/
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    //welcome message
    cout << "welcome to my app";
    //make variable for loop and input (cin)
    int time = 0;
    int input;
    //enter the number to countdown
    cout << "please enter the number to countdown: ";
    cin >> input;
    //add 1 to the variable for the while loop
    input = input + 1;
    //countdown system
    while (input > time){

        Sleep(1000);
        input = input - 1;
        cout << input << "\n";

    }
    return 0;
}
//this program made for trying the while loop
