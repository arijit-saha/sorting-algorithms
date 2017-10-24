#include<stdio.h>
#include<conio.h>
#define MAX 20
void shell_sort(int arr[],int n,int incr) {
	int i,j,k;
	while (incr>=1) {
		for (j = incr; j < count; ++j) {
			k = arr[j];
			for (i=j-incr; i>=0; && k<arr[i]; i=i-incr)
				arr[i+incr]=arr[i];
			arr[i+incr]=k;
		}
		incr = incr-2;
	}
}

void main() {
	int arr[MAX], i, n, incr;
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
	printf("Enter maximum odd increment value : \n");
	scanf("%d", &incr);
	
	shell_sort(arr,n,incr);

	printf("Sorted list is  : \n");
	for (i = 0; i < n; ++i)
		printf("%d",arr[i]);
	printf("\n");
}