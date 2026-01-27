#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int guess1;
int guess2;
int guess3;
int correct_guess;
bool status = true;
int board[3][3] = {
                    1,2,3,
                    4,5,6,
                    7,8,9};
void print_board()
{
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}
void show_zeros_places()
{
    for(int i = 0;i < 3;i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        board[x][y] = 0;
    }
    print_board();
}
void enter_guess()
{
    cout << "please enter the number you said zero placed it:";
    cin >> guess1 >> guess2 >> guess3;
}
void check_guess()
{
    if(guess1 == 1 && board[0][0] == 0 || guess1 == 2 && board[0][1] == 0 || guess1 == 3 && board[0][2] == 0 || guess1 == 4 && board[1][0] == 0 || guess1 == 5 && board[1][1] == 0 || guess1 == 6 && board[1][2] == 0 || guess1 == 7 && board[2][0] == 0 || guess1 == 8 && board[2][1] == 0 || guess1 == 9 && board[2][2] == 0)
    {
        cout << "correct\n";
        correct_guess += 1;
    }
    if(guess2 == 1 && board[0][0] == 0 || guess2 == 2 && board[0][1] == 0 || guess2 == 3 && board[0][2] == 0 || guess2 == 4 && board[1][0] == 0 || guess2 == 5 && board[1][1] == 0 || guess2 == 6 && board[1][2] == 0 || guess2 == 7 && board[2][0] == 0 || guess2 == 8 && board[2][1] == 0 || guess2 == 9 && board[2][2] == 0)
    {
        cout << "correct\n";
        correct_guess += 1;
    }
    if(guess3 == 1 && board[0][0] == 0 || guess3 == 2 && board[0][1] == 0 || guess3 == 3 && board[0][2] == 0 || guess3 == 4 && board[1][0] == 0 || guess3 == 5 && board[1][1] == 0 || guess3 == 6 && board[1][2] == 0 || guess3 == 7 && board[2][0] == 0 || guess3 == 8 && board[2][1] == 0 || guess3 == 9 && board[2][2] == 0)
    {
        cout << "correct\n";
        correct_guess += 1;
    }
    else
    {
        cout << "incorrect\n";
    }
}
void quit()
{
    string answer;
    cout << "Do you want to exit(y, n)\n";
    cin >> answer;
    while(true)
    {
        if(answer == "y")
        {
            status = false;
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
    while(status)
    {
    board[0][0] = 1;
    board[0][1] = 2;
    board[0][2] = 3;
    board[1][0] = 4;
    board[1][1] = 5;
    board[1][2] = 6;
    board[2][0] = 7;
    board[2][1] = 8;
    board[2][2] = 9;
    correct_guess = 0;
    system("cls");
    print_board();
    Sleep(1000);
    system("cls");
    show_zeros_places();
    Sleep(1000);
    system("cls");
    cout << 1 << " " << 2 << " " << 3 << " \n" << 4 << " " << 5 << " " << 6 << " \n" << 7 << " " << 8 << " " << 9 << " \n";
    enter_guess();
    check_guess();
    if(correct_guess == 3)
    {
        cout << "you won\n";
    }
    else
    {
        cout << "you lost\n";
    }
    quit();
    }
    return 0;
}
