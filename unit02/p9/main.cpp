#include <iostream>

using namespace std;

int main(void)
{
	char vowel[] = {'a','e','i','o','u','1','2','3','4','5'};
	char len = (int) sizeof(vowel);
	int i;
	for (i = 0; i<len; ++i) cout<<vowel[i]<<"\n";
	
	return 0;
}