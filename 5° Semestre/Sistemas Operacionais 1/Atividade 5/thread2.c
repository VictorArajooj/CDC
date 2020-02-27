#include <stdio.h>

int main()
{
    int i,j=1;
    fork();
    for(i=0; i<3; i++)
    {
        fork();
        printf("%d | ", j);
        j++;
    }
    printf("\n Fim do %d, j=%d \n",getpid(),j);
}