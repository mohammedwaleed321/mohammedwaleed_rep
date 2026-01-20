#include <iostream>
#include <conio.h>
using namespace std;
bool status = true;
bool states = true;
bool state = true;
class Atm
{
private:
    double money;
    double balance = 0;
    int pin;
    int choice;
public:
    void print_choices()
    {
        cout << "1.Add balance\n";
        cout << "2.Take balance\n";
        cout << "3.Show balance\n";
        cout << "0.Exit\n";
    }
    void add_balance()
    {
        cout << "how count you want to add:";
        cin >> money;
        balance = money + balance;
    }
    void take_balance()
    {
        cout << "how count you want to take:";
        cin >> money;
        if(balance < money)
        {
            cout << "your balance is not enough\n";
            cout << "press any key to back to choices\n";
            _getch();
        }
        else if(balance > money)
        {
            balance = balance - money;
        }
    }
    void show_balance()
    {
        cout << "your balance is: " << balance << endl;
        cout << "press any key to back to choices\n";
        _getch();
    }
    void check_choices()
    {
        bool stus = true;
        int choics;
        cout << "enter you choice:";
        cin >> choice;
        switch(choice)
        {
        case 1:
            add_balance();
            break;
        case 2:
            take_balance();
            break;
        case 3:
            show_balance();
            break;
        case 0:
            status = false;
            states = false;
            state = false;
            break;
        default:
            while(stus)
            {
                cout << "enter vaild choice:";
                cin >> choics;
                if(choics == 1 || choics == 2 || choics == 3)
                {
                    stus = false;
                }
            }
        }
    }
    void get_pin()
    {
        while(state)
        {
        cout << "please enter your pin:";
        cin >> pin;
        if(pin == 1234)
        {
            while(states)
            {
            system("cls");
            print_choices();
            check_choices();
            }
        }
        else
        {
            cout << "Sorry try again\n";
            status = false;
        }
        }
    }
};

int main()
{
    //code
    Atm atm;
    while(status)
    {
        atm.get_pin();
    }
    return 0;
}
