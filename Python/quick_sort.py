# Quick Sort in Python
#
# Time Complexity : O(n log n) average, O(n^2) worst case
# Space Complexity: O(log n) – recursive call stack
#
# Picks a pivot element and partitions the array so that all elements
# less than the pivot come before it and all greater elements come after,
# then recursively sorts the sub-arrays.


def quick_sort(arr):
    if len(arr) <= 1:
        return arr

    pivot = arr[len(arr) // 2]
    left   = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right  = [x for x in arr if x > pivot]

    return quick_sort(left) + middle + quick_sort(right)


if __name__ == "__main__":
    data = [3, 6, 8, 10, 1, 2, 1]
    print("Unsorted array:", data)
    sorted_data = quick_sort(data)
    print("Sorted array:  ", sorted_data)
