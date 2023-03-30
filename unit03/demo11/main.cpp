#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main(void)
{
	char data[100];
	ofstream outfile;
	outfile.open("afile.dat");
	cout<<"Waiting for the user enter...\n";
	Sleep(2000);
	cout<<"enter your name:";
	cin.getline(data, 100);
	outfile<<data<<endl;
	cout<<"enter your age:";
	cin>>data;
	cin.ignore();
	outfile<<data<<endl;
	outfile.close();
	ifstream infile;
	infile.open("afile.dat");
	Sleep(2000);
	cout<<"reading from the file\n";
	infile>>data;
	cout<<data<<endl;
	Sleep(2000);
	infile>>data;
	cout<<data<<endl;

	infile.close();

	return 0;
}