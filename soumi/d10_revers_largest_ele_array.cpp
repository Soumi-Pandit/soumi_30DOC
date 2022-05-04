#include<stdio.h>  
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
  
int main()  
{  
    int a[5], i;  
  
    printf("Enter 5 integer numbers\n");  
    for(i = 0; i < 5; i++)  
        scanf("%d", &a[i]);  
  
    printf("Array elements are:\n");  
    for(i = 4; i >= 0; i--)  
        printf("%d  ", a[i]);  
    int n = sizeof(a)/sizeof(a[0]);
    printf("\nLargest in given array is %d", largest(a, n));
    
    return 0;  
}  
