#include <iostream>

using namespace std;

class reverse
{
    private:
    int num,revnum=0,a;
   
    public:
    void input();
    void cal();
    void output();
};

void reverse::input()
{
    cout<< "Enter the number";
    cin>> num;
}
void reverse::cal()
{
    
    while(num>0)
    {
        a=num%10;
        revnum=revnum*10 + a;
        num=num/10;
    }
}
void reverse::output()
{
    cout<<"The reversed number is "<<revnum;
}

int main()
{
    reverse ob;
    ob.input();
    ob.cal();
    ob.output();
    return 0;
}