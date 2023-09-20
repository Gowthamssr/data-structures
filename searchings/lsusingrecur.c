#include<stdio.h>
int linearsearch(int a[],int key,int n)
{
    int i;
        if(a[n]==key)
        {
            return n;
        }
        else{
            return linearsearch(a,key,n+1);
        }
}
void main()
{
    int i,a[20],key,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element to search:");
    scanf("%d",&key);
    printf("Key element %d is found at index %d",key,linearsearch(a,key,0));
}

