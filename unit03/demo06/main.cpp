#include <iostream>

using namespace std;

class Teacher{
	int age;
	public:
		void setAge(int a);
		int getAge(void);
		int getAgeByThis(void)
};

void Teacher::setage(int a)
{
	age = a;
}
int getAge(void)
{
	cout<<age<<endl;
	return age;
}

int Teacher::getAgeByThis(void)
{
	int a = this->getAge();
	int a2 = this->age;
	cout<<"age get by this is"<<endl;
	cout<<"a2:"<<a2<<endl;
	return a;
}
int main(void)
{
	Teacher t;
	t.setAge(40);
	t.getAge();
	t.getAgeByThis();
	return 0;
}