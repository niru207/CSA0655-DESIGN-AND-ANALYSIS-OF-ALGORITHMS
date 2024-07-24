#include<stdio.h>

int main() {
    int i, n, arr[50], key, flag = 0, first, last, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements in ascending order:\n");
    for (i = 0; i < n; i++)
   	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the key element to search: ");
    scanf("%d", &key);

    first = 0;
    last = n - 1;

    while (first <= last) {
        mid = (first + last) / 2;

        if (arr[mid] == key) 
		{
            flag = 1;
            break;
        }
		 else if (arr[mid] < key) 
		 {
            first = mid + 1;
         } 
		else 
		{
            last = mid - 1;
        }
    }

    if (flag == 1) 
	{
        printf("Key is found at index %d\n", mid);
	}
    else
	{
        printf("Key is not found\n");
    }
    return 0;
}

