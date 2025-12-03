/*
even odd checker app
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "welcome to even odd checker app\n";
    cout << "please enter a number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "the " << num << " is an even number\n";
    }
    else if (num % 2 != 0)
    {
        cout << "the " << num << " is an odd number\n";
    }
    cout << "the program is ended" << endl;
    return 0;
}
