// Arrays

#include<iostream>
#include <vector>

using namespace std;

int main()
{
	/* code */

	vector <char> vowels {'a','e','i','o','u'};

//	cout << vowels[0]<<endl;
//	cout << vowels[4]<<endl;
	vector <int> test_scores (3,100);
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores[2] << endl;

	cout<<"\nThere are "<<test_scores.size()<<"\n Enter 3 test score";
	cin >>test_scores[0];
	cin>> test_scores.at(1);
	cout << test_scores.at(0) << endl;
	cout <<test_scores[1]<<endl;

	cout<<"enter the test score to vector";
	int score;
	cin>>score;
	test_scores.push_back(score);
	cout << "enter one more" << endl;
	cin>>score;
	test_scores.push_back(score);
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores[2] << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;




	return 0;
}