/*
doors game
*/
#include <iostream>
#include <windows.h>
using namespace std;
//make function to print doors
void doors()
{
    cout << "____1_____     ______2_____      \n";
    cout << "|        |     |          |      \n";
    cout << "|        |     |          |      \n";
    cout << "|      * |     |       *  |      \n";
    cout << "|        |     |          |      \n";
    cout << "|________|     |__________|      \n";
}
int main()
{
    //make variables for
    //input
    int choice;
    //while loop
    int x = 0;
    //print welcome message
    cout << "welcome to doors game\n";
    Sleep(1000);
    //explain the rules of the game
    cout << "rules is simple \n";
    Sleep(1000);
    cout << "1. choose the door by his number\n";
    Sleep(1000);
    cout << "2. wait you win or lost\n";
    Sleep(1000);
    cout << "and now lets game begin\n";
    Sleep(1000);
    //start game
    while (x == 0){
    cout << "            level 1\n";
    doors();
    cout << "choose door 1 or 2\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "safe go to the next level\n";
        Sleep(1000);
        cout << "          level 2\n";
        doors();
        cout << "choose door 1 or 2\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "you found the bomb\n";
            x = 1;
            break;

        case 2:
            cout << "safe go to the next level\n";
            Sleep(1000);
            cout << "     level 3\n";
            doors();
            cout << "choose door 1 or 2\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "you found the bomb";
                x = 1;
                break;
            case 2:
                cout << "safe go to the next level\n";
                Sleep(1000);
                cout << "       level 4\n";
                doors();
                cout << "choose door 1 or 2\n";
                cin >> choice;
                switch(choice)
                {
                case 1:
                    cout << "safe go to the next level\n";
                    Sleep(1000);
                    cout << "     level 5\n";
                    doors();
                    cout << "choose door 1 or 2\n";
                    cin >> choice;
                    switch(choice)
                    {
                    case 1:
                        cout << "you found the bomb\n";
                        x = 1;
                        break;
                    case 2:
                        cout << "you win\n";
                        x = 1;
                        break;
                    }
                    break;
                case 2:
                    cout << "you found the bomb\n";
                    x = 1;
                    break;
                }
            }
            break;

        }
        break;
    case 2:
        cout << "you found the bomb get out\n";
        x = 1;
        break;
    }
    }
    return 0;

}
//program ended
