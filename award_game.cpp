#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
    srand(time(0));
    int random_number = rand() % 20 + 1;
    int number;
    int lifes = 10;
    cout << "you are the winner of the award\n";
    Sleep(1000);
    cout << "to win the award you should guess the number\n";
    Sleep(1000);
    while(true)
    {
        cout << "you have " << lifes << " lives\n";
        cout << "please enter a random number between 1-20\n";
        cin >> number;
        if(number > random_number)
        {
            cout << "your number is bigger than the secret number\n";
            lifes = lifes - 1;
        }
        else if(number < random_number)
        {
            cout << "your number is smaller than the secret number\n";
            lifes = lifes - 1;
        }
        else if(number == random_number)
        {
            cout << "you won the award\n";
            break;
        }
        if(lifes == 0)
        {
            cout << "you lost the award\n";
            cout << "secret number was " << random_number << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
