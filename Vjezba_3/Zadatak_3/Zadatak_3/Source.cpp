#include <iostream>
#include <string>
#include <cstring>
#include<vector>
#include<algorithm>
#include<numeric>
#include "Header.h"
using namespace std;

int main() {
	vector<int> vect = {2,5,8,4,6,1,3,9};

	numElements(vect, 8);
	sortAndAdd(vect);
	printVector(vect);
	
	return 0;
}
