#pragma once
#pragma once
using namespace std;
void numElements(vector<int>& vect, int n) {
	vector<int>v(n);
}

void printVector(vector<int>& vect) {
	cout << endl;
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}
	cout << endl;
};

void deleteElement(vector<int>& vect) {
	int n;
	cout << "Input index of num you want to delete" << endl;
	cin >> n;
	vect.erase(vect.begin() + (n-1));
};