#include <stdio.h>
#define size 8
int main()
{
    char binary[9], Comp[9];
    int i, error=0;
    printf("Enter %d bit binary value: ",size);
    gets(binary);
    for(i=0; i<size; i++)
    {
        if(binary[i] == '1')
        {
            Comp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            Comp[i] = '1';
        }
        else
        {
            printf("Invalid");
            error = 1;
            break;
        }
    }
    Comp[size] = '\0';
    if(error == 0)
    {
        printf("Original binary = %s\n", binary);
        printf("complement = %s",Comp);
    }

    return 0;
}
