#include <iostream>
const int MAXN = 10000;
using namespace std;

int main(void)
{
	int arr[MAXN];
	int n, i;
	cin>>n;
	for (i=0; i<n; ++i)
		cin>>arr[i];
	for (i=n-1; i>=0; --i)
		cout<<arr[i]<<"\t";
	return 0;
}