#include <stdio.h>
#include<conio.h>

void selectionSort(int arr[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min = step;
    int temp;
    for (int i = step + 1; i < size; i++) {
      if (arr[i] < arr[min])
        min = i;
    }
    temp = arr[min];
    arr[min] = arr[step];
    arr[step] = temp;
  }
}

int main() {
  int arr[100],i,j,n,key;
  printf("Enter the number of elements you want to sort:\n");
  scanf("%d",&n);
  printf("Now enter the %d elements you want to sort: \n",n);
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("before sorting:\n");
  for(i=0;i<n;i++){
    printf("%d \t",arr[i]);
  }
  selectionSort(arr, n);
  printf("\n After Sorting using Selection Sort:\n");
  for (int i = 0; i < n; ++i) {
    printf("%d \t", arr[i]);
  }
  printf("\n");
  getch();
}
