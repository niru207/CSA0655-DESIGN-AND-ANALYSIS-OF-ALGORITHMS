#include <stdio.h>
int main()
{
    int arr[100];
    int i, max, min, n;
    printf("enter the number of elements to be stored in the array :");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
	scanf("%d",&arr[i]);
	}
    max = arr[0];
    min = arr[0];
    for(i=1; i<n; i++)
    {
    if(arr[i]>max)
    {
    max = arr[i];
    }
    if(arr[i]<min)
    {
    min = arr[i];
    }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n\n",min);
}
