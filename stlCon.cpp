//Access Elements:
//at()
//[]
//front()
//back()
//data()


#include <iostream>
#include <set>
#include <string>
#include <functional>
#include <vector>
#include <map>
using namespace std;


int main(){
	std::map<string, int> Map;
	Map["chot"] = 2132;
	Map["Amit"] = 2136;
	Map.insert(std::make_pair("bot",3445));

	for(auto &ell: Map){
		cout<<ell.first<<" "<<ell.second<<endl;

	}
	cout<<Map["chot"]<<endl;
	return 0;
}