#include<stdio.h>
int binarysearch(int arr[],int item,int beg,int end) {
if(beg<= end) {
int midIndex = beg +(end - beg) / 2;
if(arr[midIndex==item])
return midIndex;
if(arr[midIndex] > item)
return binarysearch(arr, item, beg,midIndex -1);
return binarysearch(arr, item,midIndex + 1, end);
}
return -1;

}
int main(void){
int arr[] = {13,45,65,82,117};
int n=sizeof(arr) / sizeof(arr[0]);
int item=82;
int ans=binarysearch(arr, item,0,n -1);
if(ans==-1)
printf("Element not present");
else
printf ("answer:  %d", ans);
return 0;
}