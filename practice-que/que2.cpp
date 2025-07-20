#include <iostream>
using namespace std;

// Write a program to input n elements into an array and print the sum of all elements .//

int main()
{
    int size, sum = 0;

    cout << "Enter the size of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all elements = " << sum << endl;

    return 0;
}
