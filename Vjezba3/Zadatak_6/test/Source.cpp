#include <iostream>
#include <string>
#include <cstring>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

void vect(vector<string>& v, int n) {
	string temp;
	int indx=0;
	for (int i = 0; i < n;i++) {
	cout << "Unesite string" << endl;
	getline(cin >> ws, temp);
	v.push_back(temp);}

	for (int i = 0; i < n; i++) {
		temp = v[i];
		indx = size(v[i]);
		for (int j = 0; j < indx / 2; j++) {
			swap(temp[j], temp[indx - j - 1]);
		}
		swap(v[i], temp);
	}
	cout << endl;

	sort(v.begin(), v.end());
};

void main(){
	vector<string> v;
	int broj = 0;
	cout << "Koliko stringova zelite ubaciti?" << endl;
	cin >> broj;
	vect(v, broj);

	for (int i = 0; i < broj; i++) {
		cout << v[i] << endl;
	}


}