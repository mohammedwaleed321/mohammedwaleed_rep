#include <iostream>
using namespace std;
string words [] = {"one","two","three","four","five","six","seven","eight","nine","ten"};
int number;
string exita;
int x = 0;
void enter_number()
{
    cout << "please enter a number from 1 to ten\n";
    cin >> number;
}
void convert_the_number()
{
    if (number == 1)
    {
        cout << words[0];
        cout << " is number with english is ";
    }

    else if (number == 2)
    {
        cout << words[1];
        cout << " is number with english is ";
    }
    else if (number == 3)
    {
        cout << words[2];
        cout << " is number with english is ";
    }
    else if (number == 4)
    {
        cout << words[3];
        cout << " is number with english is ";

    }
    else if (number == 5)
    {
        cout << words[4];
        cout << " is number with english is ";
    }
    else if (number == 6)
    {
        cout << words[5];
        cout << " is number with english is ";

    }
    else if (number == 7)
    {
        cout << "the number with english is ";
        cout << words[6];
    }
    else if (number == 8)
    {
        cout << "the number with english is ";
        cout << words[7];
    }
    else if (number == 9)
    {
        cout << "the number with english is ";
        cout << words[8];
    }
    else if (number == 10)
    {
        cout << "the number with english is ";
        cout << words[9];
    }
    else
    {
        int j = 0;
        while (j == 0)
        {
            int answer;
            cout << "invaild input\n";
            cout << "please enter a vaild input\n";
            cin >> answer;
            switch(answer)
            {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                j = 1;
                break;

            }
        }
    }
}
void quit()
{
    cout << "\ndo you want to exit\n";
    cin >> exita;
    if (exita == "yes")
    {
        x = 1;
    }
}
int main()
{

    while (x == 0)
    {
    enter_number();
    convert_the_number();
    quit();
    }
    return 0;
}
