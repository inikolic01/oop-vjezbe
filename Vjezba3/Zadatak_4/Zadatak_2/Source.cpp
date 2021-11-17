#include <iostream>
#include <string>
#include <cstring>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;


void brojElemenata(vector<int>& vect, int n) {
	vector<int>v(n);
}

void rasponElemenata(vector<int>& vect, int min, int max) {
	while (min != max + 1) {
		vect.push_back(min);
		min++;
	}
}

void ispisVektora(vector<int>& vect) {
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}
	cout << endl;
};

void NoviVekt(vector<int>& vect, vector<int>& vect1, vector<int>& vect2) {
	int j = 0;
	int br = 0;

	for (int i = 0; i < vect.size(); i++) {
		if (find(vect1.begin(), vect1.end(), vect[i]) == vect1.end()) {
			br++;
		}

	}

	brojElemenata(vect2, br);


	for (int i = 0; i < vect.size(); i++) {
		if (find(vect1.begin(), vect1.end(), vect[i]) == vect1.end()) {
			vect2.push_back(vect[i]);
			j++;
		}
	}

};

void sortiranjeIdodavanje(vector<int>& vect) {
	sort(vect.begin(), vect.end());
	int a = 0;

	for (int i = 0; i < vect.size(); i++) {
		a = vect[i] + a;
	}
	vect.insert(vect.begin(), 0);
	vect.insert(vect.end(), a);
};

void brisanje(vector<int>& vect) {
	int n;
	cout << "Unesite redni broj vektora koji zelite izbrisati" << endl;
	cin >> n;
	vect.erase(vect.begin() + n);
};


void main() {
	vector<int> vect;
	vector<int> vect1;
	vector<int> vect2;
	vector<int> vect3 = { 2,4,9,8,5,1,7,3 };


	int len, min, max;
	cout << "Unesi broj elemenata" << endl;
	cin >> len;
	/*cout << "Unesi raspon elemenata" << endl;
	cout << "\n";
	cin >> min;
	cin >> max;*/


	/*	brojElemenata(vect, len);
		brojElemenata(vect1, len);
		rasponElemenata(vect, 1, 10);
		rasponElemenata(vect1, 5, 8);*/

		//NoviVekt(vect,vect1,vect2);
	sortiranjeIdodavanje(vect3);
	ispisVektora(vect3);
	brisanje(vect3);
	ispisVektora(vect3);

}
