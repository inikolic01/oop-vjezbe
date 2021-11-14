#include<iostream>
using namespace std;

void MinMax(int* arr, int& min, int& max, int len) {
	cout << "Input array of " << len << " elemenats" << endl;

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

void minmaxRec(int* arr, int& min, int& max, int len) {


	if (arr[len - 1] > max) {
		max = arr[len - 1];
		return minmaxRec(arr, min, max, len - 1);
	}
	else if (arr[len - 1] < min) {
		min = arr[len - 1];
		return minmaxRec(arr, min, max, len - 1);

	}
	else if (len == 0) {
		return;
	}
};


void main() {
	int arr[10] = { 2,3,4,5,6,7,8,9,10 };
	int min;
	int max;
	int len;

	min = arr[0];
	max = arr[0];

	cout << "Input lenght of arra" << endl;
	cin >> len;

	//MinMax(arr, min, max,len);
	minmaxRec(arr, min, max, len);

	cout << min << "  " << max << endl;
}