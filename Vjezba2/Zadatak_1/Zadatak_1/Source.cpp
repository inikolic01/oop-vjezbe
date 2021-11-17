#include<iostream>
using namespace std;

void minmax(int* arr, int& min, int& max, int len) {
	cout << "Input array of  " << len << " elements" << endl;

	for (int i = 0; i < len; i++) {
		cin >> arr[i];
	}
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < len; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
};



void main() {
	int arr[10] = { 2,3,4,5,6,7,8,9,10 };
	int min;
	int max;
	int len;

	min = arr[0];
	max = arr[0];

	cout << "Input array length" << endl;
	cin >> len;

	minmax(arr, min, max,len);

	cout << min << "  " << max << endl;
}