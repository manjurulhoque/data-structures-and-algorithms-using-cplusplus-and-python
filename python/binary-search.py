"""
We basically ignore half of the elements just after one comparison.



Compare x with the middle element.
If x matches with middle element, we return the mid index.
Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
Else (x is smaller) recur for the left half.
"""


def binary_search(arr, size, key):
    start = 0
    end = size

    while start <= end:
        mid = int((start + end) / 2)
        if arr[mid] == key:
            print("Found the value at %d" % (mid - 1))
            return True
        elif key < arr[mid]:
            end = mid - 1
        else:
            start = mid + 1
    return False


arr = [1, 4, 6, 9, 10]

if not binary_search(arr, len(arr) - 1, 4):
    print("Not found")
