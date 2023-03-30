#include<iostream>

using namespace std;

int main(void)
{
	double lengh, width, area, perometer;
	cout<<"give me lengh of a rectangel:";
	cin>>lengh;
	cout<<"give me width of a rectangel:";
	cin>>width;
	perometer=lengh+width+lengh+width;
	area=lengh*width;
	cout<<"the perometer of the rectangel is: "<<perometer<<endl;
	cout<<"the area of the rectangel is: "<<area<<endl;

	return 0;

}