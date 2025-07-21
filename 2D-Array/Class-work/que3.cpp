
#include <iostream>
using namespace std;

int main()
{
    // Print boundry elements 
    
    int rows, columns , i ,j ;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    int arr[100][100];

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < rows; ++i)
    {
        for ( j = 0; j < columns; ++j)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Boundary Elements: " << endl;
    for ( i = 0; i < rows; ++i)
    {
        for ( j = 0; j < columns; ++j)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
