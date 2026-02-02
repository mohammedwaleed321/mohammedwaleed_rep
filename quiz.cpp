#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int random_choice = rand() % 5;
string words[5] = {"flower", "chair", "cloud", "crocodile", "keyboard"};
string guess;
bool states = true;
void welcome()
{
    cout << "===========quiz========\n";
}
void enter_guess()
{
    if(random_choice == 0)
    {
        cout << "Is thing have good smell\n";
    }
    else if(random_choice == 1)
    {
        cout << "Is thing have four legs but It not walk\n";
    }
    else if(random_choice == 2)
    {
        cout << "Is thing fly without wings and cry without eyes\n";
    }
    else if(random_choice == 3)
    {
        cout << "Is the king of Nile River\n";
    }
    else if(random_choice == 4)
    {
        cout << "Is thing we use it to type on computer\n";
    }
    cout << "enter your guess\n";
    cin >> guess;
}
void print_true()
{
    cout << "true guess\n";
}
void print_false()
{
    cout << "false guess\n";
}
void check_guess()
{
    if(guess == "flower" && random_choice == 0)
    {
        print_true();
    }
    else if(guess == "chair" && random_choice == 1)
    {
        print_true();
    }
    else if(guess == "cloud" && random_choice == 2)
    {
        print_true();
    }
    else if(guess == "crocodile" && random_choice == 3)
    {
        print_true();
    }
    else if(guess == "keyboard" && random_choice == 4)
    {
        print_true();
    }
    else
    {
        print_false();
    }
}
void quit()
{
    string answer;
    cout << "Do you want to quit(y, n)\n";
    cin >> answer;
    if(answer == "y")
    {
        states = false;
    }
}
int main()
{
    srand(time(0));
    welcome();
    while(states)
    {
        random_choice = rand() % 5;
        enter_guess();
        check_guess();
        quit();
    }
    return 0;
}
