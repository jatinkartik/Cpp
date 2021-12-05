#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: - ";
    cin >> n;
    int arr[n], num;
    cout << "Enter the elements of the array: -";
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cin >>arr[i];
    }
    cout << "Enter number to search in array: - ";
    cin >> num;
    for (int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++)
    {
        if (arr[k]==num)
        {
            cout<<"Number is present at index "<<k<<endl;
            return 0;
        }
        
    }
    cout<<"Number is not present in the given array ";
    cout << endl;
    return 0;
}