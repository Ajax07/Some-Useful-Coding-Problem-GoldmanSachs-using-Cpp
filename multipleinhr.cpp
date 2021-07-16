#include <iostream>
#include <string>

using namespace std;

class Father{
public:
	int height;
	void askFather(){
		cout <<"hi lodu"<<endl;
	}
};

class Mother{
public:
	string skincolor;
	void askMother(){
		cout <<"or lodu"<<endl;
	}
};

class child : public Father, public Mother{
public:
	void askparents(){
		cout<<"haa me gaandu hu"<<endl;
	}
	void setcolorandheight(string icolor,int iheight){
		skincolor = icolor;
		height = iheight;
	}
	void display(){
		cout<<"height is "<<height<<"and color is"<<skincolor<<endl;
	}
};

int main(){
	child anil;
	anil.setcolorandheight("black",6);
	anil.display();
	anil.askFather();
	anil.askMother();
	return 0;
}

