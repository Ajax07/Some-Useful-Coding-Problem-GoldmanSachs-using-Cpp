#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
	/*char first_name[20];
	char last_name[20];
	char full_name[50];
	char temp[50];

	cout<<first_name;
	cout<<"Please enter your name \n";
	cin>> first_name;

	cout<<"Please enter your last_name \n";
	cin>> last_name;

	cout<<"hello"<<first_name<<" "<<last_name;

	strcpy(full_name,first_name);
	strcat(full_name," ");
	strcat(full_name,last_name);

	cout<<"\n your full_name is"<<full_name;
*/
	string s1;
	string s2 {"Frank"};
	string s3 {s2};
	string s4 {"Frank",3};
	string s5 {s3, 0, 2};
	string s6 {3, 'X'};
	s1 = "C++ Rocks";
	cout<<s1<<endl;
	cout<<s1 +" and "+s2;


}