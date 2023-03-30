#include <iostream>

using namespace std;

int main(void)
{
	int i;
	char characters[] = {'a','e','i','o','u','0','1','2','3','4','5'};
	char len = (int) sizeof(characters);
	char password[6];
	cout<<"set your password here:";
	for (i=0; i<6; ++i)
	{
		cin>>password[i];
		if (password[i] == '*')
		{
			cout<<"you can not use it"<<endl;
			flag = 0
			break;
		}
		int j;
		for(j=0;j<len;++j)
		{
			if (characters[j]==password[i]) break;
			else
			{
				int k;
				for (k=0; k<6;k++)
				{
					if (password[i] == password[k]) break;
				}
			}
		}
		if (characters[len-1] == password[i])
		{
			flag = 0;
			cout<<"you need to use the letter inside my table and not repeat...\n";
			break;
		}
	}
	cout<<"password you set:";
	for (i = 0;i<6;++i)
	{
		if (!flag) break;
		cout<<password[i];
	}
	return 0;
}