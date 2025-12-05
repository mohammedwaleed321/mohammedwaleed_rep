#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    while (x == 0)
    {
    int money;
    string produce;
    int price;

    cout << "please enter how count you have money \n";
    cin >>money;
    cout << "what is the produce you want to buy \n";
    cin >> produce;
    cout << "what is the price of " << produce << endl;
    cin >> price;
    if (price < money)
    {
        int result = money / price;
        cout << "you can buy " << result << " " << produce << endl;
    }
    else if (price > money)
    {
        cout << "invaild input\n";
    }
    char exit;
    cout << "do you want to exit : (y or n)\n";
    cin >> exit;
    if (exit == 'n')
    {
        x = 0;
    }
    else
    {
        x = 1;
    }
    }
    return 0;
}
