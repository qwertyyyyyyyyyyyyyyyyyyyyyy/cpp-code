#include <iostream>

using namespace std;

class Student
{
	private:
		int age;
		double height;
	protected:
		const char *name
	public:
		void setName(const char* n)
		void set(int a, double h);
		int getAge(void);
		double getHeight(void;)
};

void Student::setName(const char* n)
{
	name = n;
}

void Student::set(int a, double h)
{
	age = a;
	height =h;
}

int Student::getAge(void)
{
	return age;
}
double Student::getHeight(void)
{
	return height;
}

int main(void)
{
	Student s1;
	s1.set(18, 1.80);
	int age = s1.getAge();
	double height = s1.getHeight();

	cout<<"age by attr: "<<s1.age<<endl;
	cout<<"height by attr: "<<s1.height<<endl;

	cout<<"Age:"<<age<<endl;
	cout<<"Height:"<<height<<endl;
	return 0;
}