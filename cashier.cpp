/*
cashier app
*/
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    //make a variable for while loop
    int x = 0;
    //make while loop
    while (x == 0)
    {

    //make variable for total
    double total = 0;
    //make variable for number of groceries
    int num_of_groceries;
    int grocerie_num;
    //make menu
    cout << "=================cashier===============\n";
    cout << "menu of groceries\n";
    cout << "1.juice    10 EGP\n";
    cout << "2.chips    10 EGP\n";
    cout << "3.pro chips 30 EGP\n";
    cout << "4.cola     30 EGP\n";
    cout << "5.cookies  5 EGP\n";
    cout << "6.hohos    5 EGP\n";
    cout << "7.tiger    15 EGP\n";
    cout << "8.coffee   37 EGP\n";
    cout << "9.cheese   12 EGP\n";
    cout << "10.nescafe 8 EGP\n";
    cout << "11.fruiti  3 EGP\n";
    cout << "0.exit\n";
    //input how count groceries you want to buy
    cout << "how count groceries you want to buy\n";
    cin >> num_of_groceries;
    //make for loop
    for (int i = 0;i<num_of_groceries;i++)
    {
    cout << "=================cashier===============\n";
    cout << "menu of groceries\n";
    cout << "1.juice    10 EGP\n";
    cout << "2.chips    10 EGP\n";
    cout << "3.pro chips 30 EGP\n";
    cout << "4.cola     30 EGP\n";
    cout << "5.cookies  5 EGP\n";
    cout << "6.hohos    5 EGP\n";
    cout << "7.tiger    15 EGP\n";
    cout << "8.coffee   37 EGP\n";
    cout << "9.cheese   12 EGP\n";
    cout << "10.nescafe 8 EGP\n";
    cout << "11.fruiti  3 EGP\n";
    cout << "0.exit\n";
    //input groceries
    cout << "what groceries you want to buy\n";
    cin >> grocerie_num;
    if (grocerie_num == 1)
    {
        total += 10;
    }
    if (grocerie_num == 2)
    {
        total += 10;
    }
    if (grocerie_num == 3)
    {
        total += 30;
    }
    if (grocerie_num == 4)
    {
        total += 30;
    }
    if (grocerie_num == 5)
    {
        total += 5;
    }
    if (grocerie_num == 6)
    {
        total += 5;
    }
    if (grocerie_num == 7)
    {
        total += 15;
    }
    if (grocerie_num == 8)
    {
        total += 37;
    }
    if (grocerie_num == 9)
    {
        total += 12;
    }
    if (grocerie_num == 10)
    {
        total += 8;
    }
    if (grocerie_num == 11)
    {
        total += 3;
    }
    if(grocerie_num == 0)
    {
        x = 1;//exit loop
    }



    }
    //print total of the groceries
    cout << "total is " << total << "EGP\n";
    Sleep(5000);
    }
    return 0;
}
