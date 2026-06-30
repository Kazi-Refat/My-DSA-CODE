#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int x=max+2;
    int brr[x];
    for (int i = 0; i <x; i++)
    {
        brr[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        int a=arr[i];
        brr[a]=1;
    }
    for (int i = 0; i <x; i++)
    {
        if(brr[i]==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}