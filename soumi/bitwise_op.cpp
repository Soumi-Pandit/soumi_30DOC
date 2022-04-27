#include<stdio.h>

int main()

{
    int a=3;
	int b=7; 
    printf("a= %d,b= %d\n",a,b);
    printf("bitwise -and- operator result= %d\n",a&b); 
    printf("bitwise -or- operator result= %d\n", a|b); 
    printf("bitwise -xor- operator result= %d\n", a^b);
    printf("biwise -not- operator result for a= %d\n", a=~a);  
    printf("biwise -not- operator result for b= %d\n", b=~b);
    printf("bitwise -left shift- operator for a= %d\n", a<<1); 
    printf("bitwise -right shift- operator for a= %d\n", a>>1); 
    return 0;

} 
