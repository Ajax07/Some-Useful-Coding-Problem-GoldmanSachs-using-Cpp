#include <iostream>

using  namespace std;

const double pi = 3.141;

double calc_area(double radius){
	return pi*radius*radius;
}

void area_circle(){
	double radius;
	cout<<"enter radius ";
	cin>>radius;
	cout<<"area is "<<calc_area(radius)<<endl;
}

int main(){
	area_circle();
}