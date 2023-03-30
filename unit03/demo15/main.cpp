#include <iostream>

int main(void)
{
	int a, b;
	freopen("number.in","r",stdin);
	freopen("factors.out","w",stdout);
	std::cin>>a>>b;
	std::cout<<a<<"\t->\t"
	for(int i=1; i<=a; i++)
	{
		if (a%i==0) std::cout<<i<<"\t";
	}
	std::cout<<"\n"<<b<<"\t->";
	for (int j=1; j<=b; j++)
	{
		if(b%j==0) std::cout<<j<<"\t"
	}
	std::cout<<"\n";
	std::cout<a<<"&&"<<b<<"\t->\t";
	int min = (a>=b)?a:b;
	int k;
	int hcf;
	for (k = 1; k<=min;K++)
	{
		if (a%k==0 && b%k==0)
		{
			hcf=k;
			std::cout<<k<<"\t"
		}
	}
	std::cout<<"\nHCF\t->\t"<<hcf<<std::endl;

	fclose(stdin);
	fclose(stdout);
	return 0;
}