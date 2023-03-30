#include<iostream>

using namespace std;
int main(void)
{
	double speedJack = 50.0f;
	double speedJohn = 75.0f;
	double amounts = 500.0f;
	double time, appleJack, appleJohn;
	time= amounts / (speedJohn + speedJack); //4
	appleJohn = speedJohn * time;
	appleJack = speedJack * time;

	cout<<"they had worked for "<<time<<" hours"<<endl;
	cout<<"Jack had collected "<<appleJack<<" apples"<<endl;
	cout<<"Jonh had collected "<<appleJohn<<" apples"<<endl;

	return 0;
}