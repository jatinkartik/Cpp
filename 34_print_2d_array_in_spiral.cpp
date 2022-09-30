#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int row, col;
    // cout << "Enter the number of Row : -";
    cin >> row;
    // cout << "Enter the number of Col : -";
    cin >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int row_start = 0, row_end = row - 1;
    int column_start = 0, column_end = col - 1;
    while (row_start <= row_end && column_start <= column_end)
    {
        // for row print
        for (int col = column_start; col <= column_end; col++)
        {
            cout << " " << arr[row_start][col];
        }
        row_start++;
        // for col print
        for (int row = row_start; row <= row_end; row++)
        {
            cout << " " << arr[row][column_end];
        }
        column_end--;
        // for row print
        for (int col = column_end; col >= column_start; col--)
        {
					cout << " " << arr[row_end][col];
        }
        row_end--;
        // for col print
        for (int row = row_end; row >= row_start; row--)
        {
            cout << " " << arr[row][column_start];
        }
        column_start++;
    }

    cout << endl;
    return 0;
}
