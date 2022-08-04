#include <iostream>
using namespace std;

    int main()
    {
    	
    	int num;
		cout << "\n\n Check the number is postive negative or zero :\n";	
        cout<<" Enter the number ";
    	cin>>num;
		
		if(num<0)
		cout<<"The number is negative";
		if(num==0)
		cout<<"The number is zero";
		if(num>0)
		cout<<"The number is postive";
        return 0;
    }