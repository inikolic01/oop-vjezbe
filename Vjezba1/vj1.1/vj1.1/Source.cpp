#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	bool flag;
	cout << "unesi " << true << " - " << false << endl;
	cin >>ws>> flag;
	cout << noboolalpha<< flag << endl;
	int a = 255;
	cout << "hex " << hex << a << endl;
	cout<< "dec " << dec << a << endl;
	cout << "oct " << oct << a << endl;
	cout << endl;
	cout << setfill('x') << setw(10);
	cout << 77 << endl;
	double pi = 3.141592;
	cout << "pi = " << uppercase;
	cout << setprecision(4) << setw(3)<<fixed<<right<< setfill('0');
	cout << pi << endl;
}