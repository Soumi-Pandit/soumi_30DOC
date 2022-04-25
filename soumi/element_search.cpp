#include <stdio.h>
int main()
{
    int arr[20];
    int size,i,a,f;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &a);
    f=0; 
    for(i=0; i<size; i++)
    {
        if(arr[i]==a)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("\n%d is found at position %d",a,i+1);
    }
    else
    {
        printf("\n%d is not found in the array",a);
    }
    return 0;
}
