//Find maximum Subarray Sum
#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int size) {
    int maxSum = INT_MIN, currentSum = 0;

    for (int i = 0; i < size; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Subarray Sum: " << maxSubArraySum(arr, size) << endl;

    return 0;
}
