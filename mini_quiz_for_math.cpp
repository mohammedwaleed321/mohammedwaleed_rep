/*
mini quiz for math
*/
/*
1. mean first
2. mean second
3. mean third
4. mean fourth
5. and.......
6.
7.
8.
9.
10.
*/
#include <iostream>
using namespace std;
int main(){
    //make variable for input
    int answer;
    //print the header
    cout << "-------------------------------------------math quiz--------------------------------------------\n";
    cout << "1. 10 + 12= ";
    cin >> answer;
    // answer the quistion system
    if (answer == 22){
        cout << "true\n";
        cout << "2. 63 + 82= ";
        cin >> answer;
        if (answer == 145){
            cout << "true\n";
            cout << "3. 86 - 25= ";
            cin >> answer;
            if (answer == 61){
                cout << "true\n";
                cout << "4. 94 - 35 + 2= ";
                cin >> answer;
                if (answer == 61){
                    cout << "true\n";
                    cout << "5. 83 + 40 - 4= ";
                    cin >> answer;
                    if (answer == 83 + 40 - 4){
                        cout << "true\n";
                        cout << "6. 45 + 12= ";
                        cin >> answer;
                        if (answer == 45 + 12){
                            cout << "true\n";
                            cout << "7. 58 - 20= ";
                            cin >> answer;
                            if (answer == 58 - 20){
                                cout << "true\n";
                                cout << "8. 75 - 30= ";
                                cin >> answer;
                                if (answer == 75 - 30){
                                    cout << "true\n";
                                    cout << "9. 105 + 95= ";
                                    cin >> answer;
                                    if (answer == 105 + 95){
                                        cout << "true\n";
                                        cout << "10. 150 - 45= ";
                                        cin >> answer;
                                        if (answer == 150 -45){
                                            cout << "true\n";
                                            cout << "good job";
                                        }
                                        else {
                                            cout << "false";
                                        }
                                    }
                                    else {
                                        cout << "false";

                                    }

                                }
                                else {
                                    cout << "false";

                                }

                            }

                        }
                        else {
                            cout << "false";

                        }
                    }
                    else {
                        cout << "false";

                    }
                }
                else {
                    cout << "false";

                }

            }
            else {
                cout << "false";

            }
        }
        else {
            cout << "false";

        }
    }
    else {
        cout << "false";
    }

    return 0;
}

// program ended
