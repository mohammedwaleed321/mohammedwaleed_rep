#include <iostream>
using namespace std;
class Distance
{
private:
    float distance;
    float first_number;
    float second_number;
public:
    void print_choices()
    {
        std::cout << "1.melimeter\n";
        std::cout << "2.centemeter\n";
        std::cout << "3.decimeter\n";
        std::cout << "4.meter\n";
        std::cout << "5.kilometer\n";
    }
    void enter_choice()
    {
        std::cout << "enter number of unit you want to convert from:";
        std::cin >> first_number;
        std::cout << "enter distance you want to convert:";
        std::cin >> distance;
        std::cout << "enter number of unit you want to convert to:";
        std::cin >> second_number;
    }
    friend void convert_km(Distance dis);
    friend void convert_m(Distance dis);
    friend void convert_dm(Distance dis);
    friend void convert_cm(Distance dis);
    friend void convert_mm(Distance dis);
    float getFirstNumber()
    {
        return first_number;
    }
    float getSecondNumber()
    {
        return second_number;
    }
    float getDistance()
    {
        return distance;
    }
};

void convert_km(Distance dis)
{
    float result;
    if(dis.getFirstNumber() == 5 && dis.getSecondNumber() == 5)
        {
            result = dis.getDistance() * 1;
            cout << dis.getDistance() << " km to kilometer = " << result;
        }
        else if(dis.getFirstNumber() == 5 && dis.getSecondNumber() == 4)
        {
            result = dis.getDistance() * 1000;
            cout << dis.getDistance() << " km to meter = " << result;
        }
        else if(dis.getFirstNumber() == 5 && dis.getSecondNumber() == 3)
        {
            result = dis.getDistance() * 10000;
            cout << dis.getDistance() << " km to decimeter = " << result;
        }
        else if(dis.getFirstNumber() == 5 && dis.getSecondNumber() == 2)
        {
            result = dis.getDistance() * 100000;
            cout << dis.getDistance() << " km to centimeter = " << result;
        }
        else if(dis.getFirstNumber() == 5 && dis.getSecondNumber() == 1)
        {
            result = dis.getDistance() * 1000000;
            cout << dis.getDistance() << " km to melimeter = " << result;
        }
        else
        {
            cout << "invaild inputs\n";
        }
}
void convert_m(Distance dis)
{
    float result;
    if(dis.getFirstNumber() == 4 && dis.getSecondNumber() == 5)
    {
        result = dis.getDistance() * 0.001;
        cout << dis.getDistance() << " m to km = " << result;
    }
    else if(dis.getFirstNumber() == 4 && dis.getSecondNumber() == 4)
    {
        result = dis.getDistance() * 1;
        cout << dis.getDistance() << " m to meter = " << result;
    }
    else if(dis.getFirstNumber() == 4 && dis.getSecondNumber() == 3)
    {
        result = dis.getDistance() * 10;
        cout << dis.getDistance() << " m to decimeter = " << result;
    }
    else if(dis.getFirstNumber() == 4 && dis.getSecondNumber() == 2)
    {
        result = dis.getDistance() * 100;
        cout << dis.getDistance() << " m to centimeter = " << result;
    }
    else if(dis.getFirstNumber() == 4 && dis.getSecondNumber() == 1)
    {
        result = dis.getDistance() * 1000;
        cout << dis.getDistance() << " m to melimeter = " << result;
    }
    else
        {
            cout << "invaild inputs\n";
        }

}
void convert_dm(Distance dis)
{
    float result;
    if(dis.getFirstNumber() == 3 && dis.getSecondNumber() == 5)
    {
        result = dis.getDistance() / 10000;
        cout << dis.getDistance() << " dm to kilometer = " << result;
    }
    else if(dis.getFirstNumber() == 3 && dis.getSecondNumber() == 4)
    {
        result = dis.getDistance() * 0.1;
        cout << dis.getDistance() << " dm to meter = " << result;
    }
    else if(dis.getFirstNumber() == 3 && dis.getSecondNumber() == 3)
    {
        result = dis.getDistance() * 1;
        cout << dis.getDistance() << " dm to decimeter = " << result;
    }
    else if(dis.getFirstNumber() == 3 && dis.getSecondNumber() == 2)
    {
        result = dis.getDistance() * 10;
        cout << dis.getDistance() << " dm to centimeter = " << result;
    }
    else if(dis.getFirstNumber() == 3 && dis.getSecondNumber() == 1)
    {
        result = dis.getDistance() * 100;
        cout << dis.getDistance() << " dm to melimeter = " << result;
    }
    else
        {
            cout << "invaild inputs\n";
        }
}
void convert_cm(Distance dis)
{
    float result;
    if(dis.getFirstNumber() == 2 && dis.getSecondNumber() == 5)
    {
        result = dis.getDistance() / 100000;
        cout << dis.getDistance() << " cm to kilometer = " << result;
    }
    else if(dis.getFirstNumber() == 2 && dis.getSecondNumber() == 4)
    {
        result = dis.getDistance() * 0.01;
        cout << dis.getDistance() << " cm to meter = " << result;
    }
    else if(dis.getFirstNumber() == 2 && dis.getSecondNumber() == 3)
    {
        result = dis.getDistance() * 0.1;
        cout << dis.getDistance() << " cm to decimeter = " << result;
    }
    else if(dis.getFirstNumber() == 2 && dis.getSecondNumber() == 2)
    {
        result = dis.getDistance() * 1;
        cout << dis.getDistance() << " cm to centimeter = " << result;
    }
    else if(dis.getFirstNumber() == 2 && dis.getSecondNumber() == 1)
    {
        result = dis.getDistance() * 10;
        cout << dis.getDistance() << " cm to melimeter = " << result;
    }
    else
        {
            cout << "invaild inputs\n";
        }
}
void convert_mm(Distance dis)
{
    float result;
    if(dis.getFirstNumber() == 1 && dis.getSecondNumber() == 5)
    {
        result = dis.getDistance() / 1000000;
        cout << dis.getDistance() << " mm to kilometer = " << result;
    }
    else if(dis.getFirstNumber() == 1 && dis.getSecondNumber() == 4)
    {
        result = dis.getDistance() * 0.001;
        cout << dis.getDistance() << " mm to meter = " << result;
    }
    else if(dis.getFirstNumber() == 1 && dis.getSecondNumber() == 3)
    {
        result = dis.getDistance() * 0.01;
        cout << dis.getDistance() << " mm to decimeter = " << result;
    }
    else if(dis.getFirstNumber() == 1 && dis.getSecondNumber() == 2)
    {
        result = dis.getDistance() * 0.1;
        cout << dis.getDistance() << " mm to centimeter = " << result;
    }
    else if(dis.getFirstNumber() == 1 && dis.getSecondNumber() == 1)
    {
        result = dis.getDistance() * 1;
        cout << dis.getDistance() << " mm to melimeter = " << result;
    }
    else
        {
            cout << "invaild inputs\n";
        }
}
int main()
{
    Distance d;
    string answer;
    while(true)
    {
        system("cls");
        d.print_choices();
        d.enter_choice();
        convert_km(d);
        convert_m(d);
        convert_dm(d);
        convert_cm(d);
        convert_mm(d);
        cout << "\ndo you want to convert again(y, n)\n";
        cin >> answer;
        if(answer == "n")
        {
            break;
        }
    }
    return 0;
}
