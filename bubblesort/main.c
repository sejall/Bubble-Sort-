#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i,t,low ,high,mid;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    low=0;
    high=n-1;
    printf("Enter element to be search:");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(high>=low)
        {
            mid=(high+low)/2;
            if(a[mid]==t)
            {
                printf("element %d is found at %d positionl:",t,mid+1);
                break;
            }
            else if(a[mid]<t)
                low=mid+1;
            else
                high=mid-1;
        }
        else
            {
                printf("Element is not found\n");
                break;

            }
    }


    return 0;
}
