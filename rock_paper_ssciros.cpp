#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;
int main()
{

    int choose;
    int player_points = 0;
    int computer_points = 0;
    cout << "you have 5 rounds\n";
    for(int i = 0;i < 5; i++)
    {
    srand(time(0));
    int random_number = rand() % 3 + 1;
    Sleep(6000);
    system("cls");
    cout << "round " << i + 1 << endl;
    cout << "computer points: " << computer_points << endl;
    cout << "player points: " << player_points << endl;
    cout << "-------------------\n";
    cout << "choose rock paper scissors\n";
    cout << "1.rock\n";
    cout << "2.paper\n";
    cout << "3.scissors\n";
    cout << "please enter number of choice\n";
    cin >> choose;
    //draw
    if(choose == random_number)
    {
        cout << "draw\n";
        cout << "player points still " << player_points << endl;
        cout << "computer points still " << computer_points << endl;
    }
    //lose
    else if(choose == 1 && random_number == 2)
    {
        cout << "computer played paper but you played rock\n";
        cout << "you lost\n";
        cout << "computer had an one point\n";
        computer_points += 1;
    }
    else if(choose == 2 && random_number == 3)
    {
        cout << "computer played scissors but you played paper\n";
        cout << "you lost\n";
        cout << "computer had an one point\n";
        computer_points += 1;
    }
    else if(choose == 3 && random_number == 1)
    {
        cout << "computer played rock but you played scissors\n";
        cout << "you lost\n";
        cout << "computer had an one point\n";
        computer_points += 1;
    }
    //win
    else if(choose == 1 && random_number == 3)
    {
        cout << "you played rock but computer played scissors\n";
        cout << "you won\n";
        cout << "player had an one point\n";
        player_points += 1;
    }
    else if(choose == 2 && random_number == 1)
    {
        cout << "you played paper but computer played rock\n";
        cout << "you won\n";
        cout << "player had an one point\n";
        player_points += 1;
    }
    else if(choose == 3 && random_number == 2)
    {
        cout << "you played scissors but computer played paper\n";
        cout << "you won\n";
        cout << "player had an one point\n";
        player_points += 1;
    }
    else
    {
        while(true)
        {
            int answer;
            cout << "please enter number of choice\n";
            cin >> answer;
            if(answer == 1|| answer == 2|| answer == 3)
            {
                break;
            }
        }
    }
    }
    Sleep(4000);
    cout << "player has " << player_points << " points\n";
    cout << "computer has " << computer_points << " points\n";
    Sleep(2000);
    if(player_points > computer_points)
    {
        cout << "the winner is player\n";
    }
    else if(player_points < computer_points)
    {
        cout << "the winner is computer\n";
    }
    else if(player_points == computer_points)
    {
        cout << "draw\n";
    }
    system("pause");
    return 0;
}
