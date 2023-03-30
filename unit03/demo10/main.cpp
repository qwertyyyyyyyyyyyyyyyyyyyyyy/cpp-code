#include <iostream>

using namespace std;

class People
{
	const char *name;
	protected:
		const char *lang;
	public:
		People(void)
		void eat(void);
		void speak(const char*l);
		void _init(const char *name, const char *land);
};

People::People(void)
{
	cout<<"you must have a name and speak a native lnaguege\n";
	cout<<"please set them first\n";
	cout<<"your name pls:";

}
void People::_init(const char *name, const char *land)
{
	name = n;
	land = l;
}
void People::eat(void)
{
	cout<<"English\n"
	cout<<this->name<<", as a people must eat\n";
}
void People::speak(const char *l)
{
	cout<<"ypu can speak "<<l<<"now\n";
	cout<<name<<" can speak "<<lang<<endl;
}

class Student: public People{
	int id;
	int score;
	public:
		void set(int i, int s)
		{
			id = i;
			score = s;
		}
		void learn(void)
		{
			cout<<this->name<<"is learning now\n"
		}
};
int main(void)
{
	People p;
	p._init("hi","English");
	p.eat();
	p.speak("English")
	Student s;
	s.set(1000001, 90);
	s._init("Jason","France")
}