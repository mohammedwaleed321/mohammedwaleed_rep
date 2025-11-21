/*
inputs
input command in c++ is
cin
how to use it
cin >> [variable];
*/
#include <iostream>
using namespace std;
int main(){
    //make variable
    int age;
    //enter age
    cout << "please enter your age: ";
    cin >> age;
    //make variables to calculation you age in days and hours
    int your_age_in_days = age * 365;
    int you_age_in_hours = your_age_in_days * 24;
    //print your age
    cout << "your age in days is: " << "around " << your_age_in_days << "\n";
    cout << "your age in hours is: " << "around " << you_age_in_hours << "\n";
    cout << "program ended";
    return 0;
}
