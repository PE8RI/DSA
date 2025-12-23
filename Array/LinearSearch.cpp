#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;   // element found
    }
    return -1;          // element not found
}

int main() {
    int arr[] = {5, 3, 7, 9, 2};
    int n = 5;
    int key = 9;

    int index = linearSearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}
