#include <iostream>
using namespace std;

void welcome()
{
    //print welcome message
    cout << "========================average calculator=================\n";
}
void calculate_average()
{
    string name;
    int mark;
    int num_of_marks;
    int sum_marks = 0;
    int average;
    //take name from user
    cout << "Enter name:";
    cin >> name;
    cout << "how count mark you enter:";
    cin >> num_of_marks;
    for(int i = 0;i < num_of_marks; i++)
    {
        cout << "Enter mark:";
        cin >> mark;
        sum_marks += mark;
    }
    cout << sum_marks << endl;
    average = sum_marks / num_of_marks;
    cout << "average of " << name << "is " << average << endl;
}
int main()
{
    //call welcome function
    welcome();
    //call calculate_average function
    calculate_average();
    return 0;
}
