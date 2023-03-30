#include <iostream>

int main(void)
{
	freopen("number.in","r",stdin);
	freopen("maxNum.out","w",stdout);
	int total;
	std::cin>>total; 
	int num;
	int max = 0;
	for(int i=0; i<total; i++)
	{
		std::cin>>num;
		if (num>=max) max = num;
	}
	std::cout<<max<<std::endl;

	fclose(stdin);
	fclose(stdout);
	return 0;
}