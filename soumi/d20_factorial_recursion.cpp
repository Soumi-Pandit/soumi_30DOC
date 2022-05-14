#include<stdio.h>
int fact(int n);
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorial of %d = %d", num, fact(num));
    return 0;
}

int fact(int n) 
{
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
