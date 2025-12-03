/*
text maze 1.0
*/
#include <iostream>
using namespace std;
int main(){
    //print maze
    cout << "_______________________________\n";
    cout << "|  goal |                      |\n";
    cout << "|       |    __________________|\n";
    cout << "|   ____|                      |\n";
    cout << "|   |        __________        |\n";
    cout << "|   |                 |        |\n";
    cout << "|   |                 |        |\n";
    cout << "|   |_________________|________|\n";
    cout << "|                  ________    |\n";
    cout << "|                         |    |\n";
    cout << "|       ____________      |    |\n";
    cout << "| ______            ______|    |\n";
    cout << "|      |           |           |\n";
    cout << "|      |           |           |\n";
    cout << "|      |_______    |           |\n";
    cout << "|             |start|          |\n";
    cout << "|_____________|_____|__________|\n";
    // make variable for diriction
    string dirs;
    // enter dirs
    cout << "please enter dir to go(left,right,up and down): ";
    cin >> dirs;
    // solving maze system
    if (dirs == "left"){
        cout << "false\n";
        cout << "program ended\n";


    }
    if (dirs == "right"){
        cout << "false\n";
        cout << "program ended\n";
    }
    if (dirs == "up"){
        cout << "true\n";
        cout << "please enter the next dir to go: ";
        cin >> dirs;
        if (dirs == "left"){
            cout << "true\n";
            cout << "please enter the next dir to go: ";
            cin >> dirs;
            if (dirs == "left"){
                cout << "false\n";
                cout << "program ended\n";
            }
            if (dirs == "right"){
                cout << "false\n";
                cout << "program ended\n";
            }
            if (dirs == "up"){
                cout << "true\n";
                cout << "you win\n";
            }
            if (dirs == "down"){
                cout << "false\n";
                cout << "program ended\n";
            }


        }
        if (dirs == "right"){
            cout << "false\n";
            cout << "program ended\n";
        }
        if (dirs == "up"){
            cout << "false\n";
            cout << "program ended\n";
        }
        if (dirs == "down"){
            cout << "false\n";
            cout << "program ended\n";
        }
    }
    if (dirs == "down"){
        cout << "false\n";
        cout << "program ended\n";
    }
    return 0;
    //program ended
}
// this program is version 1
// this code its hard to understand
// that mean i made spagette code
// that version possible have many problems
// so i wish you can edit it and make better version
