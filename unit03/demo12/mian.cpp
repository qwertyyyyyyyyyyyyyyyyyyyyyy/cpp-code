#include <iostream>
#include <cstdio>

int main(void)
{
	freopen("q1.in","r",stdin);
	freopen("q1.out","w",stdout);
	int lineNum;
	std::cin>>lineNum;
	int a, b;
	for (int i=0; i<lineNum;i++)
	{
		std::cin>>a>>b;
		std::cout<<a<<"+"<<b<<"="<<a+b<<std::endl;
	}
	std::cin>>a>>b;
	std::cout<<a<<"+"<<b<<"="<<a+b<<std::endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}