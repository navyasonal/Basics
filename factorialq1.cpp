#include<iostream>
using namespace std;
class factorial
{
	private:
			int n,fac=1;
	public:
		void input();
		void cal();
		void output();
};
void factorial::input()
{
    cout<<"Enter  a number: ";
    cin>> n;
}
void factorial::cal()
{
    if(n==0 || n==1)
    cout<< "Factorial of "<<n<<"is 1";
    
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
}
void factorial::output()
{
    cout<<"The factorial is "<<fac;
}
int main()
{
    factorial object;
    object.input();
    object.cal();
    object.output();
}