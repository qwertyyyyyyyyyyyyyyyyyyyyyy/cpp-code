#include <iostream>

using namespace std;

class shape{
	public:
		int length;
		int width;
		void setLength(int len){
			length = len;
		}
		void setWidth(int w){
			width = w;
		}
		int getLength(void){
			return length;
		}
		int getWidth(void){
			return width;
		}
};

class Rectangle : public Shape{
	public:
		int getArea(void){
			cout<<length*width<<endl;
		}
};

int main(void)
{
	Rectangle rct;
	rct.setLength(100);
	rct.setWidth(10);
	rct.getArea();
	return 0;
	return 0;
}