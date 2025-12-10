#include <iostream>
#include <windows.h>
using namespace std;
int balance;
void space()
{
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
    cout << "                                      \n";
}




int main()
{
    int x = 0;

    string username_input;
    string password;
    int input;
    int balance;
    int pay = 0;
    cout << "                                   welcome to the digital bank\n";
    cout << "please make a user\n";
    cout << "please enter your username: ";
    cin >> username_input;
    cout << "please enter you password: ";
    cin >> password;
    space();
    while (x == 0){
    cout << "what do you want to do\n";
    cout << "1.enter your balance\n";
    cout << "2.view your balance\n";
    cout << "3.pay from your balance\n";
    cout << "4.exit\n";
    cin >> input;
    switch (input)
    {


        case 1:
            space();
            cout << "please enter your balance: ";
            cin >> balance;
            space();

            break;
        case 2:
            space();
            cout << "your balance is " << balance - pay << "\n";
            Sleep(10000);
            space();
            break;
        case 3:
            space();
            cout << "how count you want to pay: ";
            cin >> pay;
            space();
            break;
        case 4:
            x = 1;
            break;
        default:
            int a = 0;
            while (a == 0)
            {
                int choice;
                space();
                cout << "please enter 1 or 2 or 3 or 4";
                cin >> choice;
                switch (choice)
                {


                    case 1:
                        a = 1;
                        break;
                    case 2:
                        a = 1;
                        break;
                    case 3:
                        a = 1;
                        break;
                    case 4:
                        a =1;
                        break;
                    default:
                        a = 0;
                        break;
                }

            }
    }

    }
}
