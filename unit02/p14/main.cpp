#include <iostream>
#define SIZE 13
#define OUTCAR 4

char carPark[SIZE] = {0};
char carOut[OUTCAR] = {'B','F','H','K'};

using namespace std;

itn main(void)
{
	int i;
	char ch = 'A'
	for(i = 0; i<SIZE;++i)
	{
		carPark[i] =ch;
		ch++;
		cout<<carPark[i]<<endl;
	}
	char car;
	cout<<"where did you park your car?"<<endl;
	cin>>car;
	for (i = 0; i<OUTCAR;++i)
	{
		if (car == carOut[i] || car ==carOut[i+1])
		{
			cout<<"the car needs to move"<<endl;
			if (i == 0)
			{
				int j = carOut[1] - 'A' + 1;
				if (j>3)
				{
					cout<<"need moving one car\n";
					cout<<"car"<<i<<"need to be moved\n";
				}
				else cout<<"you need to move at least two cars\n";
			}
			else if(i == OUTCAR-1)
			{
				int j = carPark[SIZE] - carOut + 1;
				if (j>3)
				{
					cout<<"need moving one car\n";
					cout<<"car"<<i<<"need to be moved\n";
				}
				else cout<<"you need to move at least two cars\n";
			}
		}
		else if(car != carOut[i] && car !=carOut[i+1])
		{
			if (i == OUTCAR-1)
			{
				cout<<"your car can leave without waiting\n"
			}
			else continue;
		}
	}
	return 0;
}