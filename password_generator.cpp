#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string password_words[43] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","1","2","3","4","5","6","7","8","9","!","@","#","$","%","^","&","*"};

bool status = true;

void welcome()
{
    cout << "==========password generator=========\n";
}

void generate_password()
{
    int length;
    //take password length from user
    cout << "please enter length of your strong password\n";
    cin >> length;
    cout << "you random strong password is\n";
    for(int i = 0;i < length; i++)
    {
        int random_number = rand() % 43;
        cout << password_words[random_number];
    }
    cout << "\n";
}

void quit()
{
    while(true)
    {
        string answer;
        cout << "do you want to make another password(y,n)?\n";
        cin >> answer;
        if(answer == "n")
        {
            status = false;
            break;
        }
        else if(answer == "y")
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
        system("cls");
        welcome();
        generate_password();
        quit();
   }
   return 0;
}
