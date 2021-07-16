#include <iostream>

int main(){
	int miles;
	int gallon;
	double miles_per_gallon;
	std::cout<<"enter miles  ";
	std::cin>>miles;
	std::cout<<"enter gallon  ";
	std::cin>>gallon;
	try {
		if(gallon == 0)
			throw 0;
		miles_per_gallon = static_cast<double>(miles)/gallon;
		std::cout<<"result" << miles_per_gallon<<std::endl;
	}
	catch(int &ex){
		std::cout<<"  print  "<<ex;
		std::cerr<<"     Sorry, you can't divide by zero";
	}
	return 0;
}