#include <iostream>
using namespace std;
int number;
int points;
void print_ground()
{
    cout << "  1 2 3 4 5                                     \n";
    cout << "  6 7 8 9 10                                    \n";
    cout << "  11 12 13 14 15                                \n";
    cout << "  16 17 18 19 20                                \n";
    cout << "  21 22 23 24 25                                \n";
}
void enter_number()
{
    cout << "please enter the number from this numbers\n";
    cin >> number;
}
void check_the_number()
{
    switch(number)
    {
    case 1:
    case 5:
    case 9:
    case 13:
    case 16:
    case 12:
    case 21:
    case 24:
        cout << "bomb\n";
        points = 10;
        break;
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
    case 14:
    case 15:
    case 17:
    case 18:
    case 20:
    case 22:
    case 23:
    case 25:
        cout << "safe\n";
        points += 1;
        break;
    default:
        int s = 0;
        while(s == 0)
        {
            int answer;
            cout << "this is invaild input\n";
            cout << "please enter a vaild input\n";
            cin >> answer;
            switch(answer)
            {
            case 1:
            case 5:
            case 9:
            case 13:
            case 16:
            case 12:
            case 21:
            case 24:
                cout << "bomb\n";
                cout << "game is ended\n";
                points = 10;
                s = 1;
                break;
            case 2:
            case 3:
            case 4:
            case 6:
            case 7:
            case 8:
            case 10:
            case 11:
            case 14:
            case 15:
            case 17:
            case 18:
            case 20:
            case 22:
            case 23:
            case 25:
                cout << "safe\n";
                points += 1;
                s = 1;
                break;
            }
            break;
        }

}
}
int main()
{
    cout << "you should survive from 8 bombs\n" << "good luck\n";
    while (points < 8)
    {
    print_ground();
    enter_number();
    check_the_number();
    }
    system("pause");
    return 0;
}
