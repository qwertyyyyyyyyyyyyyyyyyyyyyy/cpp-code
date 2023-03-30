#include <iostream>

using namespace std;

int main(void)
{
	int ages[30] = {10,20,40,14,11,17,19,15};
	//cout<<"size of age:"<<sizeof(ages)<<endl;
	cout<<ages[0]<<endl;
	int num[3] = {0};
	cout<<num[2]<<endl;
	int i;
	for (i=0; i<30; ++i)
		cout<<ages[i]<<"\n";
	return 0;
}