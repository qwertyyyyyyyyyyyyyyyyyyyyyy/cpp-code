#include <iostream>

using namespace std;

int main(void)
{
	int sides;
	while (1)
	{
		cout<<"give me a number of the sides"<<endl;
		cin>>sides;
		if (sides == 3) cout<<"this is a triangle"<<endl;
		else if(sides == 4) cout<<"this is a quadrilateral"<<endl;
		else if(sides == 5) cout<<"this is a pentagon"<<endl;
		else if(sides == 6) cout<<"this is a hexagon"<<endl;
		else if(sides == 7) cout<<"this is a heptagon"<<endl;
		else if(sides == 8) cout<<"this is an octagon"<<endl;
		else if(sides == 9) cout<<"this is a nonagon"<<endl;
		else if(sides == 10) cout<<"this is a decagon"<<endl;
		else if(sides == 0) break;
		else cout<<"something wrong with your imput. pls give me another sides";
	}
	cout<<"thank you"<<endl;
	return 0;
}