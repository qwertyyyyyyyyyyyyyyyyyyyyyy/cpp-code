#include <iostream>

using namespace std;

int main(void)
{
	int i;
	char characters[] = {'a','e','i','o','u','0','1','2','3','4','5'};
	char len = (int) sizeof(characters);
	char password[6];
	//cin>>password;
	char letter = 'e';
	for (i=0; i<len; ++i)
	{
		if (letter == characters[i])
		 {
		 	cout<<letter<<"in the array"<<'\n'; 
		 	break;
		 }
		if (i == len-1) cout<<letter<<"not in the array\n";
	}
	return 0;
}