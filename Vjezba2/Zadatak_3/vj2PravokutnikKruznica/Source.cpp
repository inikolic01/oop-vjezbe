#include<iostream>
using namespace std;

struct Rectangle {
	int x1;
	int y1;
	int x2;
	int y2;
};

struct Circle {
	int xs;
	int ys;
	int r;
};

bool check(Rectangle& p, Circle& k)
{
	int Xn = max(p.x1, min(k.r, p.x2));
	int Yn = max(p.y1, min(k.ys, p.y2));

	int Dx = Xn - k.r;
	int Dy = Yn - k.ys;
	return (Dx * Dx + Dy * Dy) <= k.r * k.r;

};

void counter(Rectangle*niz, Circle& k,int &cntr, int len) {
	for (int i = 0; i < len; i++) {
		if (check(niz[i], k)) {
			cntr++;
		}
	}

};


void main() {
	struct Rectangle niz[] = { {-6,-2,6,2}, {1,1,1,1} };
	struct Circle k = {0,0,5};
	int cntr = 0;
	int len = (sizeof(niz) / sizeof(*niz));

	counter(niz, k,cntr,len);

	cout << cntr << endl;

	

}
