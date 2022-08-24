#include <iostream>
#include <math.h>
using namespace std;

class average{
    private:
    int x1;
    int y1;
    int x2;
    int y2;
    

    public:
    void setA(int a,int b,int c,int d)
    {
        x1=a;
        y1=b;
        x2=c;
        y2=d;
        
    }
    friend void printresults(average);
};

void printresults(average e1)
{
    cout<<"Ans "<<sqrt(pow(e1.x1-e1.x2, 2) + pow(e1.y1-e1.y2, 2))<<endl;
}
int main()
{
    average e1;
    int x1,y1,x2,y2;
    cout<<"Enter x coordinate ";
    cin>>x1;
    cout<<"Enter y coordinate ";
    cin>>y1;
    
    
    cout<<"Enter x coordinate ";
    cin>>x2;
    cout<<"Enter y coordinate ";
    cin>>y2;

    e1.setA(x1,y1,x2,y2);
    printresults(e1);
}
