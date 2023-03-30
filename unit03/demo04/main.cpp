#include <iostream>

using namespace std;

class Game
{
	public:
		void set(const char* n, double p, int ed);
		const char* getName(void);
		double getPrice(void);
		int getEditor(void);
		~Game();
		Game();
	private:
		const char* name;
		double price;
		int Editor;
};

Game::Game(void)
{
	cout<<"welcome play the x-box game"<<endl;
	price = 1000;
	Editor = 1;
}

Game::~Game(void)
{
	cout<<"thank you for playing the game"<<endl;
}

void Game::set(const char* n, double p,int edi)
{
	name = n;
	price = p;
	Editor = edi;
}

const char* Game::getName(void)
{
	return name;
}

double Game::getPrice(void)
{
	return price;
}

int Game::getEditor(void)
{
	return Editor;
}

int main(void)
{
	Game g;
	const char *n = "PUBG";
	double p;
	cout<<"give the price:\n";
	cin>>p;
	g.set(n,p,2);
	double price = g.getPrice();
	cout<<"the price of the game is"<<price<<endl;
	return 0;
}