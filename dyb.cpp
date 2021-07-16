#include <iostream>

using namespace std;

int main()
{
 /*   int* array_ptr{ nullptr };
    int size;

    cout << "how big do you want" << endl;
    cin >> size;
    array_ptr = new int[size];
    delete [] array_ptr;
*/
    int scores[] {100,95,89};
    cout<< "values of scores"<<scores<<endl;

    int *score_ptr{scores};
    cout<<"values of score_ptr"<<endl;

    cout <<"Array1"<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;

    cout <<"Array2"<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

    cout <<"Array3"<<endl;
    cout<<*score_ptr<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;

    cout <<"Array4"<<endl;
    cout<<*scores<<endl;
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;


    cout << endl;
    return 0;
}