#include <iostream>
using namespace std;

int main()
{
    // Input n integers into a 1D array. Find the maximum and minimum values in the array .// 
    
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else 
        {
            min = arr[i];
        }
    }

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}
