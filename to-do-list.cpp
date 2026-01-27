#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;
bool status = true;
int task_number;
int option;
vector<string>tasks;
string task;
void print_options()
{
    cout << "|====================|\n";
    cout << "|1.Add a task        |\n";
    cout << "|2.Show tasks        |\n";
    cout << "|3.Remove a task     |\n";
    cout << "|4.exit              |\n";
    cout << "|====================|\n";
}
void enter_option()
{
    cout << "please enter the option's number:";
    cin >> option;
}
void add_task()
{
    cout << "how count task you want enter\n";
    cin >> task_number;
    cin.ignore();
    for(int i = 0;i < task_number;i++)
    {
        cout << "Enter task\n";
        getline(cin, task);
        tasks.push_back(task);
    }
}
void show_tasks()
{
    for(int i = 0;i < tasks.size();i++)
    {
        cout << i + 1 << "." << tasks[i] << "\n";
    }
}
void check_options()
{
    switch(option)
    {
    case 1:
        add_task();
        break;
    case 2:
        system("cls");
        show_tasks();
        cout << "press any key to back to menu\n";
        _getch();
        break;
    case 3:
        system("cls");
        int number_of_task;
        int number_of_removed_tasks;
        show_tasks();
        cout << "how count task you want to remove\n";
        cin >> number_of_removed_tasks;
        for(int i = 0;i < number_of_removed_tasks;i++)
        {
        cout << "please enter the number of the task you want to remove\n";
        cin >> number_of_task;
        if (number_of_task > 0 && number_of_task <= tasks.size()) { tasks.erase(tasks.begin() + (number_of_task - 1)); }
        }
        break;
    case 4:
        status = false;
        break;

    }
}
int main()
{
    while(status)
    {
        system("cls");
        print_options();
        enter_option();
        check_options();
    }
    return 0;
}
