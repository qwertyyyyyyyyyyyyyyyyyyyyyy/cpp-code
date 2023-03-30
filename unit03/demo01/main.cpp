#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		double width;
		double height;
		double get(void);
		void set(double len, double wid, double hei);
};

double 	Box::get(void)
{
	return length*width*height;
}

void Box::set(double len, double wid, double hei)
{
	length = len;
	width = wid;
	height = hei;
}

int main(void)
{
	Box b1;
	Box b2;
	Box b3;
	double volume = 0.0;
	b1.height = 5.0;
	b1.length = 10.0;
	b1.width = 7.0;

	volume = b1.length * b1.width * b1.height;
	cout<<"the volume of Box 1 is"<<volume<<endl;

	b2.height = 8.5;
	b2.length = 15.4;
	b2.width = 10.0;
	volume = b2.get();
	cout<<"the volume of box 2 is"<<volume<<endl;

	b3.set(10.0, 8.4, 16.8);
	volume = b3.get();
	cout<<"the volume of box 3 is"<<volume<<endl;

	return 0;
}