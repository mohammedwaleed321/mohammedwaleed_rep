//even counter app
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int num;
    cout << "please enter the num you want to count the even nums from 0 to him\n";
    cin >> num;
    cout << "the even numbers between 0 and "<< num << " is\n";
    for(int i=0;i<num + 1;)
    {
        cout << i << endl;
        Sleep(1000);
        i = i + 2;
    }
    return 0;
}
