/*
calculator app
*/
#include <iostream>
using namespace std;
int main(){
//make variables
float first_num;
float second_number;
cout << "========================\n";
cout << "==welcome to my app=====\n";
cout << "========================\n";
//enter the first number
cout << "please enter first number: ";
cin >> first_num;
//enter the second number
cout << "please enter second number: ";
cin >> second_number;
//print the results
cout << "after +: " << first_num + second_number;
cout << "\n" << "after -: " << first_num - second_number;
cout << "\n" << "after *: " << first_num * second_number;
cout << "\n" << "after /: " << first_num / second_number;
//thank the users
cout << "\n" << "thank you for try this program";
return 0;
}
//this program is my first program
