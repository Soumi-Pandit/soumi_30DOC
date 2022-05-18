#include <stdio.h>  
int swap(int *, int *);   
int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values in main \n a = %d, b = %d\n",a,b);
    swap(&a,&b);  
    printf("After swapping values in main \n a = %d, b = %d\n",a,b);   
}  
int swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping values in function \n a = %d, b = %d\n",*a,*b); 
}  
