// Take ten integer inputs from user and print positive numbers, negative numbers, odd numbers, even numbers, zero number.
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int pos_nums = 0;
    int neg_nums = 0;
    int zero_nums = 0;
    int even_nums = 0;
    int odd_nums = 0;

    cout << "Input 10 numbers in array: ";
    for(int j = 0; j < 10; j ++)
    {
        cin >> arr[j];
    }
    for (int i = 0; i < 10; i ++)
    {
        if (arr[i] > 0)
        pos_nums ++;

        else if (arr[i] < 0)
        neg_nums ++;

        else if (arr[i] == 0)
        zero_nums ++;
    }
        
    for (int i = 0; i < 10; i ++)
    {
        if (arr[i] %2 == 0)
        even_nums ++;
            
        else if (arr[i] %2 != 0)
        odd_nums ++;
    }
    cout << "Positive numbers: " << pos_nums << endl;
    cout << "Negative numbers: " << neg_nums << endl;
    cout << "Zero numbers: " << zero_nums << endl;
    cout << "Even numbers: " << even_nums << endl;
    cout << "Odd numbers: " << odd_nums << endl;
    return 0;
}