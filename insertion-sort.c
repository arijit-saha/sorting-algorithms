#include<stdio.h>
#include<conio.h>
#define MAX 20
void insertion_sort(int arr[],int n) {
	int i,j,k;
	for (j = 1; j < n; ++j) {
		k = arr[j];
		for (i=j-1;i>=0 && k<arr[i];i--)
			arr[i+1] = arr[i];
		arr[i+1] = k;
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

	insertion_sort(arr,n);

	printf("Sorted list is  : \n");
	for (i = 0; i < n; ++i)
		printf("%d",arr[i]);
	printf("\n");
}