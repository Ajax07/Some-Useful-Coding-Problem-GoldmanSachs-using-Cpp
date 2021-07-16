#include <iostream>

using namespace std;

struct Array
{
	int *A;
	int size;
	int length;
	
};

void Display(struct Array arr){
	int i;
	cout<<"\nelements are\n";
	for(i=0;i<arr.length;i++)
		cout<<arr.A[i];
}
void Append(struct Array *arr,int x){
	if(arr->length<arr->size)
		arr-A[arr->]
}


int main(){
	struct Array arr;
	int n,i;
	cout<<"enter size of array";
	cin>>arr.size;
	arr.A = new int[arr.size];
	arr.length =0;
	cout<<"enter numbers";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arr.A[i];
	arr.length=n;
	Display(arr);
	free(arr.A);
	return 0;

}