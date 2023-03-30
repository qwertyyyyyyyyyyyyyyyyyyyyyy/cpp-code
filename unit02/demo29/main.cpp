#include <iostream>
#define SIZE 1000

using namespace std;

int main(void)
{
	int nums[SIZE];
	int n, i, sum;
	sum = 0;
	cin>>n;
	for(i=0; i<n; ++i)
	{
		std::cin>>nums[i];
		sum+= nums[i];
	}

	for (i=0;i<n;++i)
		cout<<nums[i]<<"+";

	cout<<"\b ="<<sum<<endl;
}