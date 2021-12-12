#pragma once
using namespace std;
struct Vector {
    int* arr;
    int phys, log;


    void vector_new(int n)
    {
        arr = new int[n];
        phys = n;
        log = 0;
    }


    void vector_delete()
    {
        delete[]arr;
    }


    void vector_push_back(int n)
    {
        if (phys == log)
        {
            arr = (int*)realloc(arr, phys * 2 * sizeof(int));
        }
        arr[log] = n;
        log++;
    }


    void vector_pop_back()
    {
        if (log == 0)
            return;
        arr = (int*)realloc(arr, (phys - 1) * sizeof(int));
        phys--;
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
        return arr[log-1];
    }


    int vector_size()
    {
        return sizeof(arr) / sizeof(arr[0]);
    }

    void print_vector()
    {
        for (int i = 0; i < log; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};