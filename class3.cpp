// input and display array

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}



//22. Sum of Array Elements
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum = " << sum;
    return 0;
}

