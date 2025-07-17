#include <iostream>
using namespace std;

int main() {

    // Find Average of all Elements of 1D Array //
    
    int size, arr[20], sum = 0, i , elements;
    float avg;

    cout << "Enter the size of Array: ";
    cin >> size;

    cout << "Enter " << size << " elements :"<< endl;
    for (i = 0; i < size; i++) {
        cin >> arr[i];     
        sum += arr[i];
    }
    
    cout << " Sum Of Elements is : " << sum << endl;
    avg = (sum) / size;

    cout << "Average of array elements: " << avg << endl;

    return 0;
}
