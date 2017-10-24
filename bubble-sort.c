#include<stdio.h>
#include<conio.h>
#define MAX 20
void bubble_sort(int arr[],int size) {
	int i,j,temp;
	for (i = 0; i < size-1; ++i) {
		for (j = 0; j < size-1-i; ++j) {
			if (arr[j]>arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void main() {
	int arr[MAX], i, j, n;
	clrscr();
	printf("Enter the number of elements : \n");
	scanf("%d",&n);
	for (i = 0; i < n; ++i) {
		printf("Enter elements %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Unsorted list is : \n");
	for (i = 0; i < n; ++i)
		printf("%d",arr[i]);
	printf("\n");

	bubble_sort(arr,n);

	printf("Sorted list is  : \n");
	for (i = 0; i < n; ++i)
		printf("%d",arr[i]);
	printf("\n");
}