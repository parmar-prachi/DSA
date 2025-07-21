
#include <iostream>
using namespace std;

int main()
{

    // Find Average of all Elements of 2D Array //

    int size, sum = 0, i, j, rows, columns, elements;
    float avg;

    cout << "Enter the Rows of Array: ";
    cin >> rows;

    cout << "Enter the Columns of Array: ";
    cin >> columns;

    cout << "Enter elements :" << endl;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {

            int arr[i][j];
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << " Sum Of Elements is : " << sum << endl;
    avg = (float)sum / (rows * columns);

    cout << "Average of array elements: " << avg << endl;

    return 0;
}