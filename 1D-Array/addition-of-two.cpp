#include <iostream>
using namespace std;

int main()
{
 
    // Perform Addition of two 1D Array and store into another Array //
    
    int i, size, a[20], b[20], c[20];

    cout << "Enter the size: ";
    cin >> size;

    cout << "Enter array a's elements:" << endl;


    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Enter array b's elements:" << endl;

    for (i = 0; i < size; i++)
    {

        cin >> b[i];
        c[i] = a[i] + b[i];
    }

    cout << " Addition of (sum of a and b) is :" << endl;
    
    for (i = 0; i < size; i++)
    {
        cout << "c[" << i << "] = " << c[i] << endl;
    }

    return 0;
}
