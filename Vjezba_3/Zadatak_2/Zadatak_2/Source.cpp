#include <iostream>
#include <string>
#include <cstring>
#include<vector>
#include<algorithm>
#include<numeric>
#include "Header.h"
using namespace std;

int main() {
	vector<int> vect;
	vector<int> vect1;
	vector<int> vect2;
	

	int len, min, max,len1,min1,max1;
	cout << "Input number of elements of first vector:\n " << endl;
	cin >> len;
	cout << "Input range: \n" << endl;
	cout << "\n";
	cin >> min;
	cin >> max;

	cout << "Input number of elements of second vector:\n " << endl;
	cin >> len1;
	cout << "Input range: \n" << endl;
	cout << "\n";
	cin >> min1;
	cin >> max1;


	numElements(vect, len);
	rangeInput(vect, min, max);

	numElements(vect1, len1);
	rangeInput(vect1, min1, max1);

	newVect(vect, vect1, vect2);
	printVector(vect2);




	return 0;
}
