// Input 10 numbers in an array and print array in reverse order. 
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    for (int i = 0; i < 10; i ++)
    {
        cout << "Input number in array " << i << " : ";
        cin >> arr[i];
    }

    for (int i = 9; i >= 0; i --)
    cout << arr[i] << endl;

    return 0;
}