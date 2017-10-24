#include<stdio.h>
#include<conio.h>
#define MAX 20
void selection_sort(int arr[],int n) {
	int i,j,temp,smallest;
	for (i = 0; i < n-1; ++i) {
		smallest = i;
		for (j = i+1; j < n; ++j) {
			if (arr[smallest]>arr[k])
				smallest = j;
		}
		if (i != smallest) {
			temp = arr[i];
			arr[i] = arr[smallest];
			arr[smallest] = temp;
		}
	}
}

void main() {
	int arr[MAX], i, n;
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

	selection_sort(arr,n);

	printf("Sorted list is  : \n");
	for (i = 0; i < n; ++i)
		printf("%d",arr[i]);
	printf("\n");
}