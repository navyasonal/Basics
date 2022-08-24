#include <iostream>
using namespace std;

class average{
    private:
    int m1,m2,m3;
    float avg;

    public:
    void setA(int a,int b, int c)
    {
        m1=a;
        m2=b;
        m3=c;
    }
    friend void printresults(average);
};

void printresults(average et)
{
    et.avg=(et.m1+et.m2+et.m3)/3;
    cout<<"Average "<<et.avg<<endl;
    
}
int main()
{
    average et;
    int x,y,z;
    cout<<"Enter a number ";
    cin>>x;
    cout<<"Enter a number ";
    cin>>y;
    cout<<"Enter a number ";
    cin>>z;
    et.setA(x,y,z);
    printresults(et);
}
