#include <iostream>
using namespace std;

int main()
{

    // Find the Maximum Element in a 1D Array .//

    int size;

    cout << "Enter the size of elements in the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The maximum element in the array is: " << max << endl;

    return 0;
}
