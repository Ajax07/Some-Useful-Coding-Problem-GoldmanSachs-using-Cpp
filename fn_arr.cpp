#include <iostream>

using  namespace std;

void print_array(int arr[],int size){
	for(int i=0;i<size;++i)
		cout<<" "<<arr[i];
	cout<<endl;
}

void set_array(int arr[], int size, int value){
	for(int i=0;i<size;++i)
		arr[i] = value;
}

int main(){
	int my_scores[] = {100,98,90,86,64};

	print_array(my_scores,5);
	set_array(my_scores,5,100);
	print_array(my_scores,5);
}