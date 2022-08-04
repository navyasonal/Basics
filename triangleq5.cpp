#include <iostream>
using namespace std;

    int main()
    {
    	
    	float a1,a2,a3;
		cout << "\n\n Calculating the third angle :\n";	
        cout<<" Enter angle 1 : ";
    	cin>>a1;
		cout<<" Enter angle 2 : ";
    	cin>>a2;
    	a3 =180-a1-a2;
        cout<<" The third angle of the triangle is "<< a3;
       
        return 0;
    }