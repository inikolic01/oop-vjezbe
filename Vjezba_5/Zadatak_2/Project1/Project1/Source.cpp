#include <iostream>
using namespace std;

class Gun {
public:
	double x;
	double y;
	double z;
	int clip = 7;
	int clipAtm=clip;

	void shoot(Gun& g);
	void reload(Gun& g);
	};

void shoot(Gun &g) {
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


int main() {
	Gun g;

	for (int i = 0; i < g.clip + 1; i++) {
		shoot(g);
	}
	reload(g);

	cout << g.clipAtm << endl;

	return 0;
}