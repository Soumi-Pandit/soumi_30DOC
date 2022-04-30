#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d,root1,root2,root;
	printf("enter a, b and c for the equation : ");  //ax^2+bx+c
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;   //d=discriminant
	if(d>0)
	{
		root1=(-b + sqrt(d))/(2*a);
        root2=(-b - sqrt(d))/(2*a);
        printf("root1 = %d and root2 = %d", root1, root2);
    }
    else if(d==0)
    {
    	root=-b/(2*a);
        printf("roots are equal = %d;", root);
	}
	else 
	{
        printf("its imaginary");
    }
    return (0);
	
}
