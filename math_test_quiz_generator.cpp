#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

int x = 0;

using namespace std;

string operation[2] = {"+","-"};
void welcome()
{
    cout << "====================math quiz generator=====================\n";
}

void generate_quiz()
{
    int qustion_number;
    cout << "how count quiz you want to make to your math test\n";
    cin >> qustion_number;
    cout << "this is your test\n";
    for(int i = 0;i < qustion_number; i++)
    {
        int first_number = rand() % 999;
        int second_number = rand() % 999;
        int operation_number = rand() % 2;
        while(true)
        {
            if(first_number < second_number)
            {
                first_number = rand() % 999;
            }
            else
            {
                break;
            }
        }
        cout << first_number << " " << operation[operation_number] << " " << second_number << " =\n";
    }
}

void exit()
{
    while(true)
    {
        string answer;
        cout << "do you want to exit (y/n)\n";
        cin >> answer;
        if(answer == "y")
        {
            x = 1;
            break;
        }
        else if(answer == "n")
        {
            break;
        }
    }
}
int main()
{
    srand(time(0));
    Sleep(1000);
    while(x == 0)
    {
        system("cls");
        welcome();
        generate_quiz();
        exit();
    }
    return 0;
}
