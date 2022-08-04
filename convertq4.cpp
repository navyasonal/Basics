#include <iostream>
using namespace std;

    int main()
    {
    	
    	float lcm,lkm,lm;
		cout << "\n\n Enter the length in cm to convert it into meter and kilometer";	
        cout<<" Enter the legth: ";
    	cin>>lcm;
		lm=lcm/100;
		lkm=lcm/1000;
		
        cout<<" The Length in meters is : "<< lm << "m \n";
		cout<<" The Length in kilometers is : "<< lkm << "km\n";
        return 0;
    } 