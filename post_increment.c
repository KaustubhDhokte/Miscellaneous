#include<stdio.h>

int main()
{
    int variable=0, arr[2], i;
    printf("\nvariable: %d\n", variable);

    arr[variable++] = 5;

    printf("\nvariable: %d\n", variable);

    for(i=0; i<2; i++)
        printf("\n arr[%d] = %d\n", i, arr[i]);

/*
Output: 

variable: 0

variable: 1

arr[0] = 5

arr[1] = 32765
'''
*/
}