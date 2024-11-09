// Write number of hours studied by ten students.
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int max_hours = 0;
    for (int i = 0; i < 10; i ++)
    {
        cout << "enter number of hours studied by student " <<  (i + 1)  << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i ++)
    cout << "Student " << (i + 1) << " studied for " << arr[i] << " hours." << endl;

    for (int i = 1; i <= 10; i ++)
    {
        if ( arr[i] > arr[max_hours] )
        {
            max_hours = i;
        }
        cout << "Student " << max_hours << " studies the most with " << max_hours << " hours of study." << endl;
    }
    return 0;
}