// fact of n natural number

#include <iostream>

using namespace std;

int fact(int n){
	if(n==0)
		return 1;
	return fact(n-1)*n;
}

int Ifact(int n){
	int s=1;
	int i;
	for(i=1;i<=n;i++)
		s=s*i;
	return s;
}


int main(){

	int r;
	r=Ifact(5);
	cout <<r<<endl;
	return 0;
}