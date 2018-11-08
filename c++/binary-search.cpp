///We basically ignore half of the elements just after one comparison.



///Compare x with the middle element.
///If x matches with middle element, we return the mid index.
///Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
///Else (x is smaller) recur for the left half.

#include<bits/stdc++.h>
using namespace std;

int ascending(void const *a, void const *b)
{
    return (*(int*)a - *(int*)b);
}

int binarySearch(int a[], int size, int key)
{
    int i, start, end, mid;
    start = 0;
    end = size-1;

    do{
        mid = (int)((start + end)/2);
        cout<<"Mid: "<<mid<<" start: "<<start<< " end: "<<end<<endl;
        if(a[mid] == key)
        {
            printf("Key found at %d !!!\n\n", (mid + 1));
            break;
        }
        else if(key < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    while(start <= end);

    if(start > end)
    {
        printf("Key not found\n\n");
    }
}

int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    qsort(array, n, sizeof(int), ascending);

    cout<<"Sorted Array: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }

    while(true)
    {
        int key;
        printf("Enter the key to find in the array: ");
        scanf("%d", &key);
        binarySearch(array, n, key);
    }

    return 0;
}
