#include <iostream>

using namespace std;

int *create_array(int size, int init_value){
	int *new_storage = nullptr;
	new_storage = new int{size};
	for(int i=0;i<size;++i){
		*(new_storage + i) = init_value;
		return new_storage;
	}
}

void display(int *array,int size){
	for(int i=0;i<size;++i)
		cout<<array[i]<<" ";
	cout<<endl;
}

int main()
{
	int *my_array = nullptr;
	int size;
	int init_value;
	cout<<"how many integer you like";
	cin>>size;
	cout<<"initial value";
	cin>>init_value;
	my_array=create_array(size,init_value);
	cout<<"\n--------\n";
	display(my_array,size);
	delete [] my_array;
	return 0;
}