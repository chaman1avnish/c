#include<stdio.h>
#include<stdlib.h>
void printre(int arr[], int n)
{
    int *count=(int*)calloc(sizeof(int),(n-2));
    int i;
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    }
    int main()
    {
    int arr[70],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printre(arr,n);
    }



