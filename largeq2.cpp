#include <iostream>
using namespace std;

class largest
{
    private:
    int n1,n2,n3,ans;
    
    public:
    void input();
    void cal();
    void output();
};

void largest::input()
{
    cout<<"Input three numbers ";
    cin>>n1;
    cin>>n2;
    cin>>n3;
}
void largest::cal()
{
    if(n1>n2 && n1>n3)
    ans=n1;
    if(n2>n1 && n2>n3)
    ans=n2;
    if(n3>n1 && n3>n1)
    ans=n3;
    
}
void largest::output()
{
    cout<<"The largest number among the three entered numbers is "<<ans;
}
int main()
{
    largest ob;
    ob.input();
    ob.cal();
    ob.output();
    return 0;
}