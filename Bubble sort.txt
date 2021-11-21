#include<stdio.h>
void bubble_sort(int arr[],int size)  {
for(int i=0;i<size;i++)
for(int j= 0;j<size-i-1;j++)
if(arr[j] >arr[j+1]){
int temp=arr[j+1];
arr [j+1]=temp;
}
void print_array(int arr[],int len){
int i;
for(i=0;i<len;i++)
printf("%d ",arr[i]);
}
int main(){
int array[]={14,17,8,90,11,2};
int length=sizeof(array)/sizeof(array[0]);
printf("Before sorting the array: ");
print_array(array,length);
printf("\n");
printf("After sorting the array: ");
bubble_sort(array,length);
print_array(array, length);
return 0;
}