#include<iostream>
#include<windows.h>
using namespace std;
int x = 0;
class Grocery
{
public:
    string names[100] = {};
    string name;
    float price;
    float total;
    string answer;
    int num_of_grocery;
void enter_groceries()
{
    cout << "how count grocery you want to buy\n";
    cin >> num_of_grocery;
    for(int i = 0;i < num_of_grocery;i++)
    {
    cout << "enter name of grocery\n";
    cin >> name;
    names[i] = name;
    cout << "enter price of grocery\n";
    cin >> price;
    total +=price;
    }
}
void show_total()
{
    cout << "you bought ";
    for (int j = 0;j < num_of_grocery;j++)
    {
        cout << names[j] << " ";
    }
    cout << endl;
    cout << "the total is" << total << "\n";
}
void ask_exit()
{
    while(true)
    {
        cout << "do you want to exit\n";
        cin >> answer;
        if (answer == "yes")
        {
            x = 1;
        }
        break;
    }
}
};
int main()
{
    Grocery grocery;
    while(x == 0)
    {
    Sleep(2000);
    system("cls");
    grocery.enter_groceries();
    grocery.show_total();
    grocery.ask_exit();
    }
    return 0;
}
