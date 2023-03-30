#include <iostream>

using namespace std;

int main(void)
{
	char letter;
	cout<<"Please give me a letter:"<<endl;
	cin>>letter	;
	cout<<(int) letter<<endl;
	int ascii_a = (int) 'a';
	int ascii_z = (int) 'z';
	int ascii_A = (int) 'A';
	int ascii_Z = (int) 'Z';
	int num = (int) letter;
	if (num>=ascii_A && num<=ascii_Z)
	{
		num += 32;
		letter = (char) num;
		cout<<letter<<endl;
	}
	//cout<<ascii_a<<"\n"<<ascii_A<<"\n"<<ascii_z<<"\n"<<ascii_Z<<"\n"<<wndl;
	if(num<ascii_A ||num>ascii_Z && num<ascii_a ||num>ascii_z ||)
		cout<<"this is not a letter"<<endl;
	else if (letter == 'a' || letter =='e' || letter =='i' || letter == 'o' || letter =='u')
		cout<<"this is a vowel"<<endl;
	else if (letter	== 'y')
		cout<<"sometime y is a vowel and sometime y is a consonant"<<endl;
	else
		cout<<"this is a consonant"<<endl;
	return 0;
}