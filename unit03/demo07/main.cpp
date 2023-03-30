#include <iostream>

using namespace std;

class Animal{
	int age;
	public:
		void eat(void);
};

void Animal::eat(void)
{
	cout<<"i need to eat food"<<endl;
}

class Dog:public Animal{
	public:
		void bark(void)
		{
			cout<<"waw waw waw"<<endl;
		}
}

int main(void)
{
	Dog d;
	d.bark();
	d.eat();
	return 0;
}