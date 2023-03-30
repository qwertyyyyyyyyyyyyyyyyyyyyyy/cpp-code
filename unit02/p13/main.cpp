#include <iostream>

using namespace std;

int main(void)
{
	int ipt;
	int coins[5] = {1,2,4,8,16};
	cin>>ipt;
	int i, j, k;
	for (i = 0; i<5; ++i)
		for(j = 0; j<5; ++j)
			for ( k = 0; k<5; ++k)
			if (coins[i]+coins[j]+coins[k] == ipt)
			{
				cout<<ipt<<" = "<<coins[i]<<"+"<<coins[j]<<"+"<<coins[k]<<"\n";
				return 0;
			}

	cout<<"sorry the value cannot getnuy three money\n";
	return 0;
}