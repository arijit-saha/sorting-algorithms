#include<stdio.h>
#include<conio.h>
#define MAX 20
void quick_sort(int arr[],int first,int last) {
	int mid, temp, low, high;
	low = first;
	hight = last;
	mid = arr[(first+last)/2];

	while (low<=high) {
		while (arr[low]<mid)
			low++;
		while (arr[high]>mid)
			high--;
		if (low<=high) {
			temp = arr[low];
			arr[low++] = arr[high];
			arr[high--] = temp;
		}
	}
	if (first<high)
		quick_sort(arr,first,high);
	if (low<high)
		quick_sort(arr,low,last);
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
	
	quick_sort(arr,0,n-1);
	
	printf("Sorted list is  : \n");
	for (i = 0; i < n; ++i)
		printf("%d",arr[i]);
	printf("\n");
}