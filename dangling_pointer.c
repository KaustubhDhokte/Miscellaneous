#include<stdio.h>
int main()
{
    /*
    int *ptr = (int *)malloc(sizeof(int));
    free(ptr);
    *ptr=10;
    */
    int *ptr = NULL;
    {
        int x  = 10;
        ptr = &x;
    }
    printf("%d", *ptr);
    //Output:10
}
