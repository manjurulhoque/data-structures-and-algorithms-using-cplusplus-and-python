#include<bits/stdc++.h>
using namespace std;

int linearSearch(int num[], int m, int key)
{
    bool flag = false;
    int i;

    for(i = 0; i < m; i++)
    {
        if(num[i] == key)
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        printf("Key found at %d !!!\n\n", (i + 1));
    }
    else
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
    int key;

    printf("\nEnter the key to search: ");
    scanf("%d", &key);

    linearSearch(array, n, key);

    return 0;
}
