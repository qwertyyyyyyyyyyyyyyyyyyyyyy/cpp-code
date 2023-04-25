#import <iostream>

int main(void)
{
	//variable
	//data type
	char a;
	short b;
	int c;
	long long d;
	unsigned int e;
	float a1;
	double b1;
	const int a3; // read only
	std::cout<<sizeof(int)<<std::endl;
	std::cout<<sizeof(a3)<<std::endl;
	//branch
	//	exp?doIfTrue:doIfFalse;
	int maxNum = (2>1)?2:1;
	int num;
	std::cin<<num;
	(num%2==0)?std::cout<<"Even\n":std::cout<<"Odd";
	int age = 15;
	int price;
	if (age <= 6) price = 0;
	else if(age > 6 && age <= 12) price = 1;
	else if (age>12 && age <= 60) price = 3;
	else{
		price = 2;
		std::cout<<"welcome\n";
	}
	int score = 8;
	switch(score)
	{
	case 9:
	case 10:
		std::cout<<"A\n";
		break;
	case 7:
	case 8:
		std::cout<<"B\n"
		break;
	case 6:
	case 5:
		std::cout<<"C\n"
		break;
	default:
		std::cout<<"D\n";
	}

	return 0;
}