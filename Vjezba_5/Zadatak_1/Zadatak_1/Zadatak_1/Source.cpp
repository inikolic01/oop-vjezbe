#include <iostream>
#include <random>
#include <cmath>
#include <ctime>
using namespace std;

class Point {
public:
	double x;
	double y;
	double z;
	
	void setValuesZero(Point &p);
	void setRandom(Point &p);
	double distanceTwoD(Point &p, int low, int high);
	void getValues(Point &p, Point &p1);
	double distanceThreeD(Point &p, Point &p1);

};

void setValuesZero(Point &p) {
	p.x = 0;
	p.y = 0;
	p.z = 0;
}
void setRandom(Point &p, int low, int high) {
	int dif = high - low;

	p.x = rand() % (dif + low);
	p.y = rand() % (dif + low);
	p.z = rand() % (dif + low);

}
void getValues(Point &p) {
	cout << p.x << endl;
	cout << p.y << endl;
	cout << p.z << endl;
	cout << endl;
}
double distanceTwoD(Point &p, Point &p1) {
	return sqrt(pow(p1.x - p.x, 2) + pow(p1.y - p.y, 2) * 1.0);
}
double distanceThreeD(Point&p, Point &p1) {
	double dist = sqrt(pow(p1.x - p.x, 2) + pow(p1.y - p.y, 2) + pow(p1.z - p.z, 2) * 1.0);
	return dist;
}

int main() {
	Point p;
	Point p1;
	
	setValuesZero(p);
	setRandom(p,10,20);
	setRandom(p1, 10, 20);
	getValues(p);
	getValues(p1);
	cout << distanceTwoD(p, p1) << endl;
	cout << distanceThreeD(p, p1) << endl;
	

	return 0;
	
}