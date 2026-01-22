#include <iostream>
#include <windows.h>
using namespace std;
bool states = true;
class VendingMachine
{
private:
    int soda_stock = 10;
    int juice_stock = 20;
    int soda_price = 30;
    int juice_price = 10;
    int total_money_in_machine = 0;
public:
    void buy(int amount)
    {
        int choice;
        int change_of_soda;
        int change_of_juice;
        cout << "there is " << soda_stock << " soda stock\n";
        cout << "there is " << juice_stock << " juice stock\n";
        cout << "what do you want to buy\n";
        cout << "1.soda\n";
        cout << "2.juice\n";
        cout << "enter your choice:";
        cin >> choice;
        if(choice == 1)
        {
            cout << "soda price is " << soda_price << "\n";
            cout << "enter your amount:";
            cin >> amount;
            if(amount >= soda_price)
            {
                if (soda_stock == 0)
                {
                    cout << "sorry we haven't any soda\n";
                }
                else
                {
                    cout << "you bought this product\n";
                    total_money_in_machine += amount;
                    soda_stock -= 1;
                    change_of_soda = amount - soda_price;
                    cout << "take the change " << change_of_soda << endl;
                    Sleep(3000);
                }
            }
            else if(amount < soda_price)
            {
                cout << "sorry you can't buy this product\n";
            }
        }
        else if(choice == 2)
        {
            cout << "juice price is " << juice_price << "\n";
            cout << "enter your amount:";
            cin >> amount;
            if(amount >= juice_price)
            {
                if (juice_stock == 0)
                {
                    cout << "sorry we haven't any juice\n";
                }
                else
                {
                    cout << "you bought this product\n";
                    total_money_in_machine += amount;
                    juice_stock -= 1;
                    change_of_juice = amount - juice_price;
                    cout << "take the change " << change_of_juice << endl;
                    Sleep(3000);
                }
            }
            else if(amount < juice_price)
            {
                cout << "sorry you can't buy this product\n";
            }
        }
        else
        {
            int vaild_choice;
            while(true)
            {
                cout << "please enter vaild choice:";
                cin >> vaild_choice;
                if(vaild_choice == 1 || vaild_choice == 2)
                {
                    break;
                }
            }
        }
    }
    void check_choices()
    {
        int amount;
        int choice;
        cout << "1.buy\n";
        cout << "0.exit\n";
        cout << "enter choice:";
        cin >> choice;
        switch(choice)
        {
        case 1:
            buy(amount);
            break;
        case 0:
            states = false;
            break;
        default:
            bool state = true;
            int vaild_choice;
            while(state)
            {
                cout << "enter a vaild choice:";
                cin >> vaild_choice;
                if(vaild_choice == 1 || vaild_choice == 2)
                {
                    state = false;
                }
            }
            break;
        }
    }
    int getTotal()
    {
        return total_money_in_machine;
    }
};
void check_administrautor(VendingMachine v1)
{
    string answer;
    string password;
    cout << "are you administrator(y, n)\n";
    cin >> answer;
    if(answer == "y")
    {
        cout << "enter password:";
        cin >> password;
        if(password == "w9n&q")
        {
            cout << "you are administrator\n";
            cout << "the total money in vending machine is " << v1.getTotal();
            Sleep(3000);
        }
        else
        {
            cout << "you aren't administrator\n";
            Sleep(3000);
        }
    }
}
int main()
{
    string answer;
    VendingMachine v;
    while(states)
    {
        system("cls");
        v.check_choices();
    }
    check_administrautor(v);
    return 0;
}
