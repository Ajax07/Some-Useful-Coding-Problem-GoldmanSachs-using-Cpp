#include <iostream>
#include <string>

using namespace std;

class Human{
private:
	string name;
	int age;

public:
	Human(string iname, int iage){
		name = iname;
		age = iage;
	}
	void tellme(){
		cout <<name<<endl<<age<<endl;
	}
friend void display(Human man);
};

void display(Human man){
	cout<<man.name<<endl<<man.age<<endl;
}

int main(){

	Human anil("anil",24);
	display(anil);
	anil.tellme();
	return 0;
}