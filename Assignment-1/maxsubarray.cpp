#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int max_sum = arr[0], current_sum = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    vector<int> arr = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    cout << maxSubarraySum(arr) << endl;
    return 0;
}
