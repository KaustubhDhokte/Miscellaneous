#include<stdio.h>
int main()
{
    int *ptr;
    int arr[] = {8, 5, 7};
    ptr = arr;
    printf("\nOld address: %p\n", ptr);
    ptr++;
    printf("\nNew address: %p\n", ptr);
    return 0;
}
/*
kaustubh@kaustubh-Inspiron-3521:~/Documents/Miscellaneous$ gcc pointer_arithmatic.c
kaustubh@kaustubh-Inspiron-3521:~/Documents/Miscellaneous$ ./a.out
Old address: 0x7ffe16dad8a0
New address: 0x7ffe16dad8a4
*/
