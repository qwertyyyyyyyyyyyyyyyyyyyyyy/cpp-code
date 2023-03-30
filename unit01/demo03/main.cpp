/*the variables of c++*/
//int int8(byte) int16 int32 int64
//int char 		 short int 	 long 		long long
//unint
//unsigned
//flout32 	float64
//float 	double
#include<iostream>

using namespace std;
int main(void)
{
	// declaration
	unsighed short num1;
	int num2;
	long num3;
	long long num4;
	char alpha;     //-128 127 (256)
	float num5;
	double num6;

	//assignment
	num1 = 65535; // 0 - 65535
	num2 = 300;
	num3 = 400;
	num4 = 500;
	alpha ='a';
	num5 = 3.14159265f;
	num6 = 3.1415926535f;
	cout<<"num1 ="<<num1<<endl;
	cout<<"num2 ="<<num2<<endl;
	cout<<"num3 ="<<num3<<endl;
	cout<<"num4 ="<<num4<<endl;
	cout<<"num5 ="<<num5<<endl;
	cout<<"num6 ="<<num6<<endl;
	cout<<"alpha ="<<alpha<<endl;

	return 0;
}