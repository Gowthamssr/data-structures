#include<stdio.h>
int main()
{
    int i,key,low,high,mid,n,j,a[40];
     printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //sorting
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("The elements int he array after sorting are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the key element to search:");
    scanf("%d",&key);
    low = 0;
    high = n-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==key)
        {
            break;
        }
        else if(a[mid]>key){
            low = 0;
            high = mid -1;
        }
        else if(a[mid]>key){
            low = mid +1;
            high = n-1;
        }
    }
    printf("The key element is found at index %d",mid);
}
