// a=1
// a++
//++a
//a--
//--a
#include<iostream>

using namespace std;

int main(void)
{
	/* code*/
	int age  = 10;
	cout<<"you are "<<age<<" years old"<<endl;
	cout<<"onr years letter..."<<endl;
	cout<<"you are "<<age++<<" years old"<<endl;
	int grade = 5;
	cout<<"you are grade "<<grade<<" now"<<endl;
	cout<<"one years letter..."<<endl;
	cout<<"you are grade "<<++grade<<" now"<<endl;

	cout<<"the age is "<<age<<endl;
	cout<<"the grade is "<<grade<<endl;

	cout<<"onr years letter... "<<endl;
	
	age++;
	++grade;
	
	cout<<"the age is "<<age<<endl;
	cout<<"the grade is "<<grade<<endl;

	return 0;
}