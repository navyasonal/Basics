#include <iostream>

using namespace std;

class area
{
    private:
    float r,ans=0;
   
    public:
    void input();
    void cal();
    void output();
};

void area::input()
{
    cout<< "Enter the radius of the circle ";
    cin>> r;
}
void area::cal()
{
    ans=3.14*r*r;
}
void area::output()
{
    cout<<"The area of the circle is "<<ans;
}

int main()
{
    area ob;
    ob.input();
    ob.cal();
    ob.output();
    return 0;
}