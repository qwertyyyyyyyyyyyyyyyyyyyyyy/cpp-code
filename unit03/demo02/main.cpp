#include <iostream>
#include <cstring>

using namespace std;

class Teacher
{
	public:
		char name[50];
		int age;
		int code;
		void set(char *n, int a, int  c);
		char * getName(void);
		int getAge(void);
		int getCode(void);
		void teach(int c);
};

void Teacher::set(char *n, int a, int c)
{
	strcpy(name, n);
	age = a;
	code = c;
}

char* Teacher::getName(void)
{
	return name;
}

int Teacher::getAge(void)
{
	return age;
}

int Teacher::getCode(void)
{
	return code;
}

void Teacher::teach(int c)
{
	if (c == 1) cout<<"English\n";
	else if (c == 2) cout<<"Math\n";
	else cout<<"Science\n";
}

int main(void)
{
	Teacher t1;
	t1.set("Jack", 29, 1);
	cout<<"the name of the teacher is "<<t1.getName()<<endl;
	t1.teach(t1.getCode());
	return 0;
}