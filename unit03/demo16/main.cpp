#include<iostream>

int main(void)
{
	freopen("test.in","r",stdin);
	freopen("output.out","w",stdout);
	int a;
	double b;
	char c;
	int total;
	int numbers[total];
	std::cin>>a;
	std::cin>>b;
	std::cin>>c;
	std::cin>>total;
	char *p = &c;
	char **p_c = &p;
	for (int i =0; i<total; i++) std::cin>>numbers[i];
	std::cout<<&a<<std::endl;
	std::cout<<&b<<std::endl;
	std::cout<<&c<<std::endl;
	std::cout<<&numbers<<std::endl;
	for (int j=0; j<total; j++) std::cout<<&numbers[j]<<std::endl;

	fclose(stdin);
	fclose(stdout);
	return 0;
}