#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;
bool status = true;
class ContactBook
{
private:
    int choice;
    int names_number;
    string name;
    vector<string>names;
public:
    void print_choices()
    {
        cout << "1.Add name\n";
        cout << "2.Show names\n";
        cout << "3.Delete name\n";
        cout << "0.Exit\n";
    }
    void add_name()
    {
        cout << "how count name you want to add:";
        cin >> names_number;
        cin.ignore();
        for(int i = 0;i < names_number;i++)
        {
            cout << "Enter name:";
            getline(cin, name);
            names.push_back(name);
        }
    }
    void show_names()
    {
        for(int i = 0;i < names.size();i++)
        {
            cout << i + 1 << "." << names[i] << "\n";
        }
    }
    void delete_choices()
    {
        int delete_number;
        int name_number_for_delete;
        show_names();
        cout << "how count name you want to delete:";
        cin >> name_number_for_delete;
        for(int i = 0;i < name_number_for_delete;i++)
        {
            cout << "enter the number of the name you want to delete:";
            cin >> delete_number;
            if(delete_number > 0 && delete_number <= names.size()) {names.erase(names.begin() + (delete_number - 1));}
        }
    }
    void enter_choices()
    {
        cout << "enter your choice:";
        cin >> choice;
        switch(choice)
        {
        case 1:
            add_name();
            break;
        case 2:
            show_names();
            cout << "press any key to back to menu\n";
            _getch();
            break;
        case 3:
            delete_choices();
            break;
        case 0:
            status = false;
            break;
        default:
            int input;
            bool state = true;
            while(state)
            {
                cout << "enter a vaild input:";
                cin >> input;
                if(input == 1 || input == 2 || input == 3)
                {
                    state = false;
                }
            }
            break;
        }
    }
};
int main()
{
    ContactBook book;
    while(status)
    {
        system("cls");
        book.print_choices();
        book.enter_choices();
    }
    return 0;
}
