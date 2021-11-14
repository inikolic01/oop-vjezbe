#include<iostream>
using namespace std;
struct Vector {
    int* arr;
    int fiz, log;


    void vector_new(int n)
    {
        arr = new int[n];
        fiz = n;
        log = 0;
    }
    void vector_delete()
    {
        delete[]arr;
    }
    void vector_push_back(int n)
    {
        if (fiz == log)
        {
            arr = (int*)realloc(arr, fiz * 2 * sizeof(int));
        }
        arr[log] = n;
        log++;
    }
    void vector_pop_back()
    {
        if (log == 0)
            return;
        arr = (int*)realloc(arr, (fiz - 1) * sizeof(int));
        fiz--;
        log--;
        return;
    }
    int& vector_front()
    {
        if (log == 0)
            log++;
        return arr[0];
    }
    int& vector_back()
    {
        if (log == 0)
            log++;
        return arr[log - 1];
    }
    size_t vector_size()
    {
        if (log == 0) 
            log++;
        return sizeof(arr) / sizeof(arr[0]);
    }


    void print_vector()
    {
        for (size_t i = 0; i < vector_size(); ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n, broj, i;
    Vector a;
    cout << "Unesite n\n";
    cin >> n;
    a.vector_new(n);
    for (i = 0; i < n; i++)
    {
        cout << "Unesite broj u vektor\n";
        cin >> broj;
        a.vector_push_back(broj);
    }
    for (i = 0; i < n; i++)
    {
        a.vector_pop_back();
    }
    a.vector_push_back(2);
    a.vector_front() = 20;
    a.vector_back() = 30;
    cout << a.log << "\n";
    cout << a.vector_back() << "\n";
    cout << a.vector_front() << "\n";
    cout << a.fiz;
    if (a.fiz != 0)
        a.vector_delete();
    return 0;
}