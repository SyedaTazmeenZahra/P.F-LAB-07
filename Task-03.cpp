// Type seven integers of an array and write how many integers are multiple of five.
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i ++)
    {
        cout << "Enter value to store in array: ";
        cin >> arr[i];

        if ( arr[i]%5 == 0)
            cout << "Multiple of 5 in this array is: " << arr[i] << endl;

        else
        cout << "Invalid" << endl;
    }
    return 0;
}