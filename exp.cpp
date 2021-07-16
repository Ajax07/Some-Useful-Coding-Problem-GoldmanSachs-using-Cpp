#include <iostream>

double calculate_mpg(int miles,int gallon){
	if (gallon==0)
	{
		throw 0;
	}
	if (miles<0||gallon<0)
	{
		throw std::string("negative number");
	}
	return static_cast<double>(miles)/gallon;

}

int main(){
	int miles;
	int gallon;
	double miles_per_gallon;
	std::cout<<"     enter miles  ";
	std::cin>>miles;
	std::cout<<"  enter gallon  ";
	std::cin>>gallon;
	try{
		miles_per_gallon = calculate_mpg(miles,gallon);
		std::cout <<"   Result:  "<<miles_per_gallon<<std::endl;
	}
	catch(int ex){
		std::cout<<ex;
		std::cerr<<"    tried to divide by zero"<<std::endl;
	}
	catch(std::string ex){
		std::cerr<<ex<<std::endl;
	}
	std::cout<<"Bye"<<std::endl;
	return 0;
}