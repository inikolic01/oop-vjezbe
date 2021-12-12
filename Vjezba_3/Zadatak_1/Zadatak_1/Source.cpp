#include <iostream>
#include <string>
#include <cstring>
#include<vector>
#include<algorithm>
#include<numeric>
#include"Header.h"
using namespace std;


int main() {
	vector<int> vect;

	int len, min, max;
	cout << "Input number of elements:\n " << endl;
	cin >> len;
	cout << "Input range: \n" << endl;
	cout << "\n";
	cin >> min;
	cin >> max;
	
	numElements(vect, len);
	rangeInput(vect, min, max);
	printVector(vect);


	return 0;
}
