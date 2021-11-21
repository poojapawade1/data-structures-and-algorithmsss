#include<stdio.h>
int linearsearch(int arr[],int targetElement,int n){
    for(int i=0;i<n;i++)
    if(arr[i]==targetElement)
    return-i;
    
}
int main(){
int arr[] = {22, 6, 42, 0, 1, 19};
int targetElement = 1;
int n = sizeof(arr)/sizeof(arr[0]);
int ans =linearsearch (arr,targetElement, n);
if(ans==-1)
printf("Element not present in the given array");
else
printf("Element found!----- :%d",ans);
targetElement=7;
ans =linearsearch(arr,targetElement,n);
if(ans==-1)
printf("\nElement not present in the given array");
else
printf("\nElement not found!\n  Index:  %d",ans);
}
OUTPUT:
Element found !-----:-4
Elemnt not found!
Index:  6