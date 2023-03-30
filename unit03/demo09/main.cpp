#include <iostream>

using namespace std;


class Shape{
	int length;

	protected:
		int width;
	public:
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
		void getArea(void){
			int length = this->getLength();
			//int width = this->getWidth();
			cout<<length*width<<endl;
		}
};

class Test {
	public:
		void getArea(void){
			int length = this->getLength();
			int width = this->getWidth();
			cout<<length*width<<endl;
		}
}

int main(void)
{
	Rectangle rct;
	rct.setLength(100);
	rct.setWidth(10);
	rct.getArea();
	return 0;
}
int main(void)
{}