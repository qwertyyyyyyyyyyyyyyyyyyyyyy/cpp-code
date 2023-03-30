#include <iostream>

using namespace std;

int main(void)
{
	int month;
	cout<<"Give me the number of the month:"<<endl;
	cin>>month;
	if (month==2) cout<<"28 or 29 day"<<endl;
	else if (month == 4 || month == 6 || month == 9 || month == 11 )cout<<"30 days"<<endl;
	else cout<<"31 days"<<endl;

	switch(month)
	{
		case 2: cout<<"28 or 29 days"<<endl; break;
		case 4:case 6: case 9: case 11: cout<<"30 days"<<endl; break;
		default: cout<<"31 days"<<endl; break;
	}

	int score;
	cout<<"Give me you score"<<endl;
	cin>>score;
	if (score >= 90 && score <= 120) cout<<"A"<<endl;
	else if(score >= 75 && score<90) cout<<"B"<<endl;
	else if(score >= 60 && score<75) cout<<"c"<<endl;
	else if(score<60 && score >= 0) cout<<"D"<<endl;
	else cout<<"there is an error in your score, please check..."<<endl;

	int num;
	cout<<"please give me a number :"<<endl;
	cin>>num;
	(!(num%2))? cout<<"even"<<endl: cout<<"old"<<endl;

	return 0;
}