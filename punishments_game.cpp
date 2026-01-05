#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
string punisments[5] = {"hit you head in the wall", "say i am crazy with a loud sound", "pour on your head water", "pull you hair", "hit yourself"};
int choice;
bool state = true;
class button
{
public:
    string name;
    int number;
void print_button()
{
    cout << "\n________      ";
    cout << "\n|       |     ";
    cout << "\n|   " << number <<"   |     ";
    cout << "\n|_______|     ";
}
};
void enter_choice()
{
    cout << "please enter number of your choice :";
    cin >> choice;
}
void check_choice(int rc = rand() % 5)
{
    switch(choice)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << punisments[rc] << endl;
        break;
    case 0:
        state = false;
        break;
    default:
        bool stts = true;
        while(stts)
        {
            cout << "please choose a number you see\n";
            cin >> choice;
            if(choice == 1||choice == 2||choice == 3||choice == 4||choice == 5||choice == 0)
            {
                stts = false;
            }
        }
    }
}
int main()
{
    while(state)
    {
    //clear screen
    system("cls");
    int random_choice = rand() % 5;
    //import buttons
    button button1;
    button1.name = "punishment 1\n";
    button1.number = 1;
    button1.print_button();

    button button2;
    button2.name = "punishment 2\n";
    button2.number = 2;
    button2.print_button();

    button button3;
    button3.name = "punishment 3\n";
    button3.number = 3;
    button3.print_button();

    button button4;
    button4.name = "punishment 4\n";
    button4.number = 4;
    button4.print_button();

    button button5;
    button5.name = "punishment 5\n";
    button5.number = 5;
    button5.print_button();

    button button0;
    button0.number = 0;
    button0.print_button();
    cout << "  exit\n";
    // call enter_choice function
    enter_choice();
    //call check_choice function
    check_choice(random_choice);
    cout << "press any key to play again or exit\n";
    _getch();

    }
    return 0;
}
