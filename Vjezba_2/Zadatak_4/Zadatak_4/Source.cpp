#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
    int n, num, i;
    Vector a;
    cout << "Input n\n";
    cin >> n;
    a.vector_new(n);

    cout << "Input num\n" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> num;
        a.vector_push_back(num);
    }


    a.vector_push_back(2);

    a.vector_front() = 20;

    a.vector_back() = 30;

    cout << "Vect: ";
    a.print_vector();
    cout << endl;

    cout <<"Log: " << a.log << "\n";

    cout <<"Vect_back: " << a.vector_back() << endl;

    cout <<"Vect_front: " << a.vector_front() << endl;

    cout<<"Phys: "<< a.phys;

    if (a.phys != 0)
        a.vector_delete();
    return 0;
}