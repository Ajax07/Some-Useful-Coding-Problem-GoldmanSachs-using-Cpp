#include <iostream>
#include <fstream>
#include <string>

int main(){
	std::ofstream out_file{"output.txt",std::ios::app};
	if(!out_file){
		std::cerr<<"problem"<<std::endl;
		return 1;
	}
	std::string line;
	std::cout<<"enter to write on file";
	std::getline(std::cin,line);
	out_file<<line<<std::endl;
	out_file.close();
	return 0;
} 