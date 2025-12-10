#include <iostream>
using namespace std;
void test1()
{
    cout << "---------------test1-------------------\n";
    cout << "|       mark                          |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|        elephan_t_               [ ] |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|        10 + 23 = 42             [ ] |\n";
    cout << "|                                     |\n";
    cout << "|        duc_k_                   [ ] |\n";
    cout << "|                                     |\n";
    cout << "|        puncituation                 |\n";
    cout << "|   i love my sister                  |\n";
    cout << "|   I love my sister             [ ]   |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|_____________________________________|\n";
}
void test2()
{
    cout << "---------------test1-------------------\n";
    cout << "|       mark                          |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|        50 - 20 = 30             [ ] |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|        10 + 23 = 42             [ ] |\n";
    cout << "|                                     |\n";
    cout << "|        5 + 5 + 5 = 15           [ ] |\n";
    cout << "|                                     |\n";
    cout << "|        puncituation                 |\n";
    cout << "|   father is kind                    |\n";
    cout << "|   Father is kind.             [ ]   |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|                                     |\n";
    cout << "|_____________________________________|\n";
}

int enter_correcting1(char c)
{
    cout << "what is first correcting (t,f)\n";
    cin >> c;
    return c;
}
int enter_correcting2(char c1)
{
    cout << "what is second correcting (t,f)\n";
    cin >> c1;
    return c1;
}
int enter_correcting3(char c2)
{
    cout << "what is third correcting (t,f)\n";
    cin >> c2;
    return c2;
}
int enter_correcting4(char c3)
{
    cout << "what is fourth correcting (t,f)\n";
    cin >> c3;
    return c3;
}
int correcting_check(int nc)
{
    if (nc == 2)
    {
        cout << "true correcting\n";

    }
    else
    {
        cout << "false correcting\n";
    }
    return nc;
}
int enter_correcting11(char cc)
{
    cout << "what is first correcting (t,f)\n";
    cin >> cc;
    return cc;
}
int enter_correcting22(char cc1)
{
    cout << "what is second correcting (t,f)\n";
    cin >> cc1;
    return cc1;
}
int enter_correcting33(char cc2)
{
    cout << "what is third correcting (t,f)\n";
    cin >> cc2;
    return cc2;
}
int enter_correcting44(char cc3)
{
    cout << "what is fourth correcting (t,f)\n";
    cin >> cc3;
    return cc3;
}
int correcting_check1(int ncc)
{
    if (ncc == 3)
    {
        cout << "true correcting\n";

    }
    else
    {
        cout << "false correcting\n";
    }
    return ncc;
}

int main()
{
    ////////////////test1//////////////////
    char c1,c2,c3,c4;
    int correcting_num;
    test1();
    enter_correcting1(c1);
    enter_correcting2(c2);
    enter_correcting3(c3);
    enter_correcting4(c4);
    cout << "please enter the mark mark will take it:";
    cin >> correcting_num;
    cout << "you give mark 4/ " << correcting_num << "\n";
    correcting_check(correcting_num);
    //////////////////test2////////////////
    test2();
    char cr1,cr2,cr3,cr4;
    int cn;
    enter_correcting11(cr1);
    enter_correcting22(cr2);
    enter_correcting33(cr3);
    enter_correcting44(cr4);
    cout << "please enter the mark will take it\n";
    cin >> cn;
    cout << "you give mark 4/ " << cn << "\n";
    correcting_check1(cn);
    cout << "thanks for playing my game\n";
    return 0;
}
