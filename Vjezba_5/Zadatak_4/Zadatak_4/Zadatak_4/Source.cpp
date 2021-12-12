#include <iostream>
#include<random>
using namespace std;
class Gun {
public:
	double x;
	double y;
	double z;
	const int clip = 7;
	int clipAtm = clip;

	void shoot(Gun& g);
	void reload(Gun& g);
	void setRandomValueGun(Gun& g);
};

class Target {
public:
	int x1;
	int y1;
	int x2;
	int y2;
	bool hit;

	void setRandomValues();

};

void setRandomValueGun(Gun& g) {
	g.x = rand() % 10;
	g.y = rand() % 10;
	g.z = rand() % 10;
};

void setRandomValues(Target *t,int n) {
	for (int i = 0; i < n; i++) {
		t[i].x2 = rand() % 10;
		t[i].y2 = rand() % 10;
		t[i].x1 = rand() % (t[i].x2);
		t[i].y1 = rand() % (t[i].y2);
	}
};


void shoot(Gun& g) {
	if (g.clipAtm <= 0) {
		cout << "Reload!!!" << endl;
	}
	else {
		g.clipAtm--;
	}
};
void reload(Gun& g) {
	g.clipAtm = g.clip;
};

int targetPractise(Gun &g,Target *t) {
	int i = 0;
	int cntr = 0;
	for(i=0;i<g.clip;i++){
		shoot(g);
		if (t[i].y2 >= g.y && t[i].y1 <= g.y) {
			t[i].hit = true;
			cntr++;
		}
	}

	return cntr;
};




int main() {
	int n;
	cout << "Input number of targets" << endl;
	cin >> n;
	cout << endl;
	Target* t = new Target[n];
	Gun g;
	setRandomValues(t,n);
	setRandomValueGun(g);

	for(int i=0;i<n;i++){
		cout << t[i].x1 << endl;
		cout << t[i].y1 << endl;
		cout << t[i].x2 << endl;
		cout << t[i].y2 << endl;
		cout << endl;
	}

	cout <<"Gun y position at: "<< g.y << endl;


	cout <<"Targets hit: " << targetPractise(g, t) << endl;
	cout << "Bullets remaining: "<< g.clipAtm << endl;




	return 0;
}