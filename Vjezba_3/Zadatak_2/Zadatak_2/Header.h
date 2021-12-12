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
void newVect(vector<int>& vect, vector<int>& vect1, vector<int>& vect2) {
	int j = 0;
	int cntr = 0;

	//prvi parametar start, drugi kraj, treci je broj koji se usporeduje.Vraca "iterator" koji se se usporeduje sa vect1.end-
	//cntr oznacava koliko puta se taj element NE pojavljuje u vektoru
	for (int i = 0; i < vect.size(); i++) {
		if (find(vect1.begin(), vect1.end(), vect[i]) == vect1.end()) {
			cntr++;
		}

	}

	numElements(vect2, cntr);


	for (int i = 0; i < vect.size(); i++) {

		if (find(vect1.begin(), vect1.end(), vect[i]) == vect1.end()) {
			vect2.push_back(vect[i]);
			j++;
		}
	}
};