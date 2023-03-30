#include <iostream>

using namespace std;


class Student{
	const char *name;
	public:
		void setName(const char *name);
		const char* getName(void);
		friend void printName(Student stu);
};

void Student::setName(const char *n)
{
	name = n;
}

const char* Student::getName(void)
{
	return name;
}

void printName(Student stu)
{
	cout<<"name of Student"<<stu.namr<<endl;
}
int main(void)
{
	Student s1;
	s1.setName("Jack");
	const char *n1 = s1.getName();
	cout<<"name from getName():"<<n1<<endl;
	printName(s1);

	return 0;
}