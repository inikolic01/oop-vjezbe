#include<iostream>
using namespace std;

class Target {
public:
	int x1;
	int y1;
	int x2;
	int y2;
	bool hit;

	void newTarget(Target &t);
	void printTargetValues(Target& t);
};

void setTargetValues(Target &t,int x1,int y1,int x2,int y2) {
	t.x1 = x1;
	t.y1 = y1;
	t.x2 = x2;
	t.y2 = y2;
};
void printTargetValues(Target &t) {
	cout<< t.x1<<endl;
	cout<< t.y1<<endl;
	cout<< t.x2<<endl;
	cout<< t.y2<<endl;
};


int main() {
	Target t;
	setTargetValues(t, 1, 2, 3, 4);
	printTargetValues(t);

}