#include <iostream>
using namespace std;

class Complex{
private:
	int real, imag;
public:
	Complex(){
		real = 0;
		imag = 0;
	}
	Complex(int r, int i){
		real = r;
		imag = i;
	}
	void print(){
		cout << real <<" + "<<imag<<"i"<<endl;
	}
	Complex operator -(){
		Complex temp;
		temp.real = -real;
		temp.imag = -imag;
		return temp;
	}
};

int main()
{
	Complex c1(5,4);
	Complex c3;
	//c1.add(c2)
	//c3=c1.minus
	c3 = -c1;
	c3.print();
	
	return 0;
}