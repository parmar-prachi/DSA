#include <iostream>
using namespace std;

int main()
{

    // Perform Addition of two 2D Array and store into another Array //

    int i, size, r, col, j, a[10][10], b[10][10], c[10][10];

    cout << "Enter the rows: ";
    cin >> r;
    cout << "Enter the columns: ";
    cin >> col;

    cout << "Enter array a's elements:" << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            int arr[i][j];
            cin >> a[i][j];
        }
    }

    cout << "Enter array b's elements:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {

            cin >> b[i][j];
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << " Addition of (sum of a and b) is :" << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {

            cout << "c[" << i << "] = " << c[i][j] << endl;
        }
    }

    return 0;
}
