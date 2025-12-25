#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string answer;
int x = 0;

void exits()
{
    cout << "do you want to exit?\n";
    cin >> answer;
    if (answer == "yes")
    {
        x = 1;
    }
}
int main()
{
    srand(time(0));
    int secret_number = rand() % 10 + 1;
    int number;
    while (x == 0)
    {
        cout << "please enter a number from 1 to 10\n";
        cin >> number;
        if (number < secret_number)
        {
            cout << "it's low\n";
        }
        else if(number > secret_number)
        {
            cout << "it's high\n";
        }
        else if(number == secret_number)
        {
            cout << "you won\n";
            x = 1;
        }

    }
    system("pause");
    return 0;
}
