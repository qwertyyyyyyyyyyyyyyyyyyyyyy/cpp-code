#include <iostream>

using namespace std;

int main(void)
{
	int i;

	for(i=2; i<=30; i++)		 # 12
		for(int j=2; j<i; j++)	 #for(int j=2; j<12; j++)
		{
			if (i%j == 0) break; #

			else(i%j != 0) continue;
		}
	

	return 0;
}