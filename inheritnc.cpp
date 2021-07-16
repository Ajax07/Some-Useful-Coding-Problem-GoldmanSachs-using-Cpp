#include <iostream>
#include <string>

using namespace std;

class Person{
protected:
	string name;
public:
	void setname(string iname){
		name = iname;
	}

};

class Student : protected Person{
public:
	void display(){
		cout << name << endl;
	}
	void setstudentname(string iname){
		setname(iname);
	}
};

int main(){
	Student anil;
	anil.setstudentname("anil");
	anil.display();
	return 0;
}