#include <iostream>
using namespace std;
int number1;
int number2;
char opr;
int enter_num1(int num1)
{
    cout << "please enter first number\n";
    cin >> number1;
    return num1;
}
int enter_op(char op)
{
    cout << "please enter operation\n";
    cin >> opr;
    return op;
}
int enter_num2(int num2)
{
    cout << "please enter second number\n";
    cin >> number2;
    return num2;
}

void calc()
{

    int result = 0;
    if (opr == '+')
    {
        result = number1 + number2;
        cout << number1 << " + " << number2 << " = " << result;
    }
    else if (opr == '-')
    {
        result = number1 - number2;
        cout << number1 << " - " << number2 << " = " << result;
    }
    else if (opr == '*')
    {
        result = number1 * number2;
        cout << number1 << " * " << number2 << " = " << result;
    }
    else if (opr == '/')
    {
        result = number1 / number2;
        cout << number1 << " / " << number2 << " = " << result;
    }
    else {
        while(true)
        {
            char o;
            cout << "please enter (+, -, *, /):";
            cin >> o;
            if (o == '+' || o == '-' || o == '*' || o == '/')
            {
                break;
            }
        }
    }
}
int main()
{
    int x = 0;
    while (x == 0)
    {

    string answer;
    enter_num1(number1);
    enter_num2(number2);
    enter_op(opr);
    calc();
    cout << "\ndo you want to exit(yes or no)\n";
    cin >> answer;
    if (answer == "yes")
    {
        x = 1;
    }
    }
    return 0;
}
