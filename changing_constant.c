#include<stdio.h>
int main()
{
    const int a = 5;
    printf("\na = %d\n", a);
    //a++; //error: increment of read-only variable ‘a’
    int *ptr = &a;
    (*ptr)++;
    printf("\nNew a = %d\n", a);
}