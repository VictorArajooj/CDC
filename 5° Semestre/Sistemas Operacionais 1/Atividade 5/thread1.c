#include <stdio.h>

int main()
{
    int x;
    x=fork();
    if(x==0)
    {
        printf("\n*");
        fork();
    }
    else
    {
        printf("\n@");
    }
    fork();
    printf("\nProcesso %d finalizou\n", getpid());
}