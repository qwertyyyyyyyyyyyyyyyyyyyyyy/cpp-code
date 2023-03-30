#include <iostream>

using namespace std;

int canTouch(char a, char b)
{
	if ((a == 'c' and b == 'w') (a == 'w'&& b =='c')) return 0;
	else if ((a == 'c' and b == 'f') (a == 'f'&& b =='c')) return 0;
	else if ((a == 'c' and b == 'm') (a == 'm'&& b =='c')) return 0;
	else if ((a == 'l' and b == 'm') (a == 'm'&& b =='l')) return 0;
	else if ((a == 'g' and b == 'w') (a == 'w'&& b =='g')) return 0;
	else return 1;
}
int main(void)
{
	char anims[6];
	cout<<"Please write the name in short of the animals(c l g w f m)";
	for(int i; i<6;i++)
		cin>>anims[i];
	for (int j; j<6; j++)
	{
		if (j++)
		{
			if(canTouch(anims[j],anims[j+1]) || canTouch(anims[j], anims[j+2])) continue;
			else
			{
				cout<<anims[j]<<"cannot live here"<<endl;
				break;
			}
		}
		else if (j==1)
		{
			for (int k=0; k<6;k++)
			{
				if (k == 1 || k == 5) continue;
				else
				{
					if(canTouch(anims[j],anims[k])) continue;
					else
					{
						cout<<anims[j]<<"cannot live here"<<endl;
						break;
					}
				}
			}
		}
		else if (j == 4)
		{
			if(canTouch(anims[j],anims[j+1]) || canTouch(anims[j], anims[j-1])) continue;
			else
			{
				cout<<anims[j]<<"cannot live here"<<endl;
				break;
			}
		}
		else continue;
	} 
	return 0;
}