#include<iostream>
using namespace std;
int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

int& func(int i) {
	arr[i]++;

	return arr[i];
}

void main() {
	int i;
	cout << "Input element\n" << endl;
	cin >> i;
	cout << endl;

	func(i);
	for (i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

}