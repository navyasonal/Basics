#include <iostream>
using namespace std;

    int main()
    {
    	int r,h;
    	float volume;
		cout << "\n\n Calculate the volume of a cylinder :\n";	
        cout<<" Enter the radius of the cylinder : ";
    	cin>>r;
		cout<<" Input the height of the cylinder : ";
    	cin>>h;
    	volume =(3.14*r*r*h);
        cout<<" The volume of a cylinder is : "<< volume << endl;
        cout << endl;
        return 0;
    }