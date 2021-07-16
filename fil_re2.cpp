#include <iostream>
#include <iomanip>
#include <fstream>

int main(){
	std::ifstream in_file;
	std::string line;
	int num;
	double total;
	in_file.open("test.txt");
	if (!in_file)
	{
		/* code */
		std::cerr<<"problem"<<std::endl;
		return 1;
	}

	while(!in_file.eof()){
		
	in_file >> line>>num>>total;
	std::cout<<line<<"  "<<num<<"  "<<total<<"  ";
}
	in_file.close();
	return 0;
}