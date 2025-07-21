#include <iostream>
using namespace std;

int main() {
    int rows, cols  , i ,j ;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter elements of the Array:";
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int choice;

    cout << "Choose an option:" << endl;
    cout << "1. Row-wise sum" << endl;
    cout << "2. Column-wise sum" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Row-wise sum:";
            for ( i = 0; i < rows; i++) {
                int  rowSum = 0 ;
                for ( j = 0; j < cols; j++) {
                    rowSum += arr[i][j];
                }
                cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
            }
            break;

        case 2:
            cout << "Column-wise sum:";
            for ( j = 0; j < cols; j++) {
                 int colSum = 0 ;
                for ( i = 0; i < rows; i++) {
                    colSum += arr[i][j];
                }
                cout << "Sum of column " << j + 1 << " = " << colSum << endl;
            }
            break;

        default:
            cout << "Invalid choice. Please select 1 or 2.";
    }

    return 0;
}
