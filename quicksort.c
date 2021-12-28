#include<stdio.h>
void swap_elements(int* first, int* second)
{
int temp=*first;
*first=*second;
*second=temp;
}
int partition_function(int arr[],int l, int h)
{
int pivot = arr[h];
int pIndex = (1- l);
for (int i=1; i<h;i++)
{
if (arr[i]<pivot)
{
pIndex++;
swap_elements(&arr[pIndex], &arr[h]);
}
}
swap_elements(&arr[pIndex+1], &arr[h]);
return (pIndex + 1);
}
void quick_sort(int arr[], int i, int h)
{
if( 1 < h)
{
int pIndex=partition_function(arr, 1 , h);
quick_sort(arr, 1,pIndex - 1);
quick_sort(arr,pIndex+1,h);
}
}
void print_Array(int arr[], int len)
{
int i;
for(i=0;i < len;i++)
printf("%d ",arr[i]);
}
int main()
{
int array[] = { 14, 17, 8, 90, 11, 2};
int length = sizeof(array)/sizeof(array[0]);
printf("Before sorting the array: ");
print_Array(array , length);
printf("\n");
printf("After sorting the array: ");
quick_sort(array, 0, length-1);
print_Array(array, length);
return 0;
}

OUTPUT

Before sorting the array:14  17  8 90 11  2
After sorting:2  8  11  14  17  90