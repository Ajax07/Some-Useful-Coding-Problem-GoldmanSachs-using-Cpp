#include <iostream>
#include <fstream>

int main(){
	std::ifstream in_file;
	in_file.open("input.txt");
	if (!in_file){
		std::cerr<<"problem"<<std::endl;
		return 1;
	}
	std::string line;
	while(std::getline(in_file, line)){
		std::cout<<line<<std::endl;
	}
	in_file.close();
	return 0;
}