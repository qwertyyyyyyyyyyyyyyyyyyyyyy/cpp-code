#include<iostream>

using namespace std;
int main(void)
{
	int readSpeed, books, bookToRead, days;
	readSpeed = 5;
	books = 67;
	days = books / readSpeed;
	bookToRead = readSpeed - (books % readSpeed);

	cout<<"you have read for"<<days<<"day"<<endl;
	cout<<"you will read"<<bookToRead<<"book today to finish you task"<<endl;

	return 0 ;
}