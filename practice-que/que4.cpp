#include <iostream>
using namespace std;

int main()
{
    // Given an array of integers, count how many are even and how many are odd //
    
    int n, evenCount = 0, oddCount = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Total Even numbers = " << evenCount << endl;
    cout << "Total Odd numbers  = " << oddCount << endl;

    return 0;
}
