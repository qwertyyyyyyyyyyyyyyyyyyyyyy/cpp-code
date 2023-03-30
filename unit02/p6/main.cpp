#include<iostream>

using namespace std;

int main(void)
{
	int num;
	cout<<"give me a number"<<endl;
	cin >> num;
	if (num % 7 ==0) cout<<"the number is a multipel of seven."<<endl;
	else cout<<"the number is not a multipel of seven."<<endl;
	return 0;
}