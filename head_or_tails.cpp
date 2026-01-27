#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    srand(time(0));
    cout << "==============head tails=============\n";
    while(true)
    {
    int random_choice = rand() % 2 + 1;
    string answer;
    string choice;
    cout << "please enter heads or tails:";
    cin >> choice;
    if(choice == "heads" && random_choice == 1)
    {
        cout << "you won\n";
        cout << "coin was heads\n";
    }
    else if(choice == "tails" && random_choice == 2)
    {
        cout << "you won\n";
        cout << "coin was tails\n";
    }
    else if(choice == "heads" && random_choice == 2)
    {
        cout << "you lost\n";
        cout << "coin was tails\n";
    }
    else if(choice == "tails" && random_choice == 1)
    {
        cout << "you lost\n";
        cout << "coin was heads\n";
    }
    else
    {
        bool state = true;
        while(state)
        {
            cout << "please choose heads or tails\n";
            cin >> choice;
            if(choice == "heads" && random_choice == 1)
            {
            cout << "you won\n";
            cout << "coin was heads\n";
            }
            else if(choice == "tails" && random_choice == 2)
            {
                cout << "you won\n";
                cout << "coin was tails\n";
            }
            else if(choice == "heads" && random_choice == 2)
            {
                cout << "you lost\n";
                cout << "coin was tails\n";
            }
            else if(choice == "tails" && random_choice == 1)
            {
                cout << "you lost\n";
                cout << "coin was heads\n";
            }
            if(choice == "heads" || choice == "tails")
            {
                state = false;
            }
        }
    }
    cout << "---------------\n";
    cout << "do you want to exit(yes or no)\n";
    cin >> answer;
    if(answer == "yes")
    {

        break;
    }
    system("cls");
    }
    return 0;
}
