#pragma once
using namespace std;
void numElements(vector<int>& vect, int n) {
	vector<int>v(n);
}

void rangeInput(vector<int>& vect, int min, int max) {
	while (min != max + 1) {
		vect.push_back(min);
		min++;
	}
}

void printVector(vector<int>& vect) {
	cout << "New vector elements: \n";
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}
	cout << endl;
};

void sortAndAdd(vector<int>& vect) {
	sort(vect.begin(), vect.end());
	int a = 0;

	for (int i = 0; i < vect.size(); i++) {
		a = vect[i] + a;
	}
	vect.insert(vect.begin(), 0);
	vect.insert(vect.end(), a);
};