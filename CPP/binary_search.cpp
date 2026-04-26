/*
 * Binary Search in C++
 *
 * Time Complexity : O(log n)  – array must be sorted
 * Space Complexity: O(1)      – iterative implementation
 *
 * Divides the search interval in half with each step to locate
 * a target value within a sorted array.
 */

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int low = 0, high = static_cast<int>(arr.size()) - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // target not found
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72, 91};

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    int target = 23;
    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    // Example of a missing element
    target = 10;
    result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
