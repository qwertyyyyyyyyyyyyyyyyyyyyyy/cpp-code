#include<iostream>

int main(void)
{
	freopen("number.in","r",stdin);
	freopen("average.out","w",stdout);
	int lines;
	std::cin>>lines;
	double a, b, c, average;
	for (int i=0; i<lines; i++)
	{
		stdcin>>a>>b>>c;
		avreage = (a + b + c) / 3;
		std::cout<<"the avreage of"<<a<<","<<b<<"and"<<c<<"is"<<avreage<<std::endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}