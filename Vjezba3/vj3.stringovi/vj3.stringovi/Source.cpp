#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int Counter(string& m, string& v)
{
    int len1 = m.length();
    int len2 = v.length();
    int res = 0;

    for (int i = 0; i <= len2-len1; i++)
    {
       
        int j;
        for (j = 0; j < len1; j++) {
            if (v[i + j] != m[j]) {
                break;
            }
        }
        if (j == len1)
        {
            res++;
        }
    }
    return res;
}



int main()
{
    vector<string> arr;


    string big = "blablalbla";
    string small = "bla";
    cout << Counter(small, big) << "<---1." << endl;



    return 0;
}