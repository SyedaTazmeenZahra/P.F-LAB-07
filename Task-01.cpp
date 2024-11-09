// Dynamically allocate an array based on user input to store integer values representing scores.
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "enter the size of an array: ";
    cin >> size;
    int arr[size];
    int num;

    for (int i = 0; i < size; i++)
    {
        cout << "enter value to store in an array: ";
        cin >> num;
        int arr[i] = {num};
        cout << arr[i] << endl;
    }
    return 0;
}