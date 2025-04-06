#include<stdio.h>
int main()
{
int arr[100];
int n,i,j,temp;
printf("Enter the no of elements of the array:");
scanf("%d",&n);
printf("Enter the elements of the array:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
// printf("Elements before reverse:\n");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
temp=arr[i];
for(j=n-1;j>=0;j--)
{ 
    arr[j]=temp;
    printf("%d",arr[j]);
}
}
}