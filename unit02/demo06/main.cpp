#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	cout<<"give me two numbers"<<endl;
	cin>>a>>b;
	int maxNum = (a>b)?a:b;
	int minNum = (a>b)?a:b;
	int isOdd = (a%2)?1:0;
	int isEven = (a%2)?0:1;
	if (isOdd) cout<<"odd"<<endl;
	else cout<<"even"<<endl;
	return 0;
}