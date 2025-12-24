#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1};
    int n = 7;

    int currSum = 0;
    int maxSum = arr[0];

    for(int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0)
            currSum = 0;
    }

    cout << maxSum;
}
