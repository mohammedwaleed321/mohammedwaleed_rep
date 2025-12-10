#include <iostream>
using namespace std;
int curreny;
void enter_curreny()
{
    cout << "please enter curreny number\n";
    cin >> curreny;

}
int main()
{

    float total = 0;
    float money;
    bool status = true;
    //print head
    cout << "====================================curenny converter=====================================\n";
    //make while loop
    while (status)
    {

    //print a message about current curreny
    cout << "the current curreny is dollar\n";
    //enter money to convert
    cout << "how count money you want to convert\n";
    cin >> money;
    //currnies
    cout << "what is the curreny you want to convert\n";
    cout << "1.pound(egyptian)\n";
    cout << "2.pound(britch)\n";
    cout << "3.euore\n";
    cout << "4.darham\n";
    cout << "5.denar(kweet)\n";
    cout << "6.denar(eraq)\n";
    enter_curreny();
    switch (curreny)
    {
        //if curreny = 1
        case 1:
            //converting
            total = money * 47.5100;
            cout << money << "dollar = " << total << " EGP\n";
            break;
        case 2:
            total = money * 0.7504;
            cout << money << "dollar = " << total << " GBP\n";
            break;
        case 3:
            total = money * 0.8591;
            cout << money << "dollar = " << total << " EUR\n";
            break;
        case 4:
            total = money * 3.6726;
            cout << money << "dollar = " << total << " AED\n";
            break;
        case 5:
            total = money * 0.3070;
            cout << money << "dollar = " << total << " KWD\n";
            break;
        case 6:
            total = money * 1309.5000;
            cout << money << "dollar = " << total << " IQD\n";
            break;
        //else
        default:
            //make while loop
            int z = 0;
            while (z == 0)
            {
                enter_curreny();

                if (curreny == 1)
                {
                    z = 1;
                }
                if (curreny == 2)
                {
                    z = 1;
                }
                if (curreny == 3)
                {
                    z = 1;
                }
                if (curreny == 4)
                {
                    z = 1;
                }
                if (curreny == 5)
                {
                    z = 1;
                }
                if (curreny == 6)
                {
                    z = 1;
                }
            }
            break;
        }
        //a quistion for exiting
        string answer;
        cout << "do you want to convert again\n";
        cin >> answer;
        if (answer == "no")
        {
            status = false;
        }
    }
    return 0;
}
//program ended
