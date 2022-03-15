#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a[] = { 11, 0,1,5, 3, 11, 3, 5, 6};
    int index[sizeof(a) / sizeof(a[0])];
    int mindex = INT8_MAX;
    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
    {
        index[i] = -1;
    }
    for (int k = 0; k < sizeof(a) / sizeof(a[0]); k++)
    {

        if (index[a[k]] != -1)
        {
            mindex = min(mindex, index[a[k]]);
        }

        else
        {
            index[a[k]] = k;
        }
    }
    cout << mindex;
    cout << endl;
    return 0;
}