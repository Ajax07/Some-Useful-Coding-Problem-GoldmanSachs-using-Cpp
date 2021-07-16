#include <iostream>
#include <fstream>
#include <string>

int main(){
	std::ifstream in_file{"test.txt"};
	std::ofstream out_file{"output.txt"};
	if(!in_file){
		std::cerr<<"Error opening file"<<std::endl;
		return 1;
	}
	if (!out_file)
	{
		std::cerr<<"Error opening out_file"<<std::endl;
		return 1;
	}
	std::string line;
	while(std::getline(in_file,line))
		out_file<<line<<std::endl;

	std::cout<<"file copied"<<std::endl;
	in_file.close();
	out_file.close();
	return 0;
}