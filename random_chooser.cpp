#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool status = true;
int choices_number;
string choice;
string choices[100];
void enter_choices()
{
    cout << "Please enter how count choice you want to choice it randomly:";
    cin >> choices_number;
    for(int i = 0;i < choices_number; i++)
    {
        cout << "Enter choice:\n";
        cin >> choice;
        choices[i] = choice;
    }
}
void choose()
{
	int random_choice = rand() % choices_number;
    cout << "random choice is:" << choices[random_choice] << "\n";
}
void exits()
{
    string answer;
    cout << "do you want to exit\n";
    cin >> answer;
    if(answer == "yes")
    {
        status = false;
    }
    system("cls");
}
int main()
{
    srand(time(0));
    while(status)
    {
    enter_choices();
    choose();
    exits();
    }
    return 0;
}
