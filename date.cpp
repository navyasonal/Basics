#include <iostream>

using namespace std;

class calender{
    private:
    int d,yy;
    string month;
    public:
    void input();
    void display();
};

void calender::input()
{
    cout<<"Enter the day ";
    cin>>d;
    cin>>month;
    cin>>yy;
}

void calender::display()
{
    cout<<d<<" "<<month<<" "<<yy;
}

int main()
{
    calender ob;
    ob.input();
    ob.display();
    return 0;
}