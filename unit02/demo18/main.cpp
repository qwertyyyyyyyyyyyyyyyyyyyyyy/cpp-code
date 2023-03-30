#include <iostream>
#include <windows.h>

using namespace std;

int main(void)
{
	int i;
	for(i=10;i>0;i--)
	{
		cout<<i<<'\a'<<endl;
		Sleep(1000);
	}
	cout<<"happy new year"<<endl;

	return 0;
}