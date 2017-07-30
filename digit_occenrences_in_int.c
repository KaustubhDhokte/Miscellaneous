#include<stdio.h>

int occurences(int n)
{
    int count = 0;
    printf("\nChecking for [%d]", n);
    while(n != 0)
    {
        if(n%10 == 7)
            count++;
        n = n/10;
    }
    return count;
}

int main()
{
    int n;
    n = occurences(777);
    printf("\n No. of 7 in 777: {%d}\n", n);

    n = occurences(77);
    printf("\n No. of 7 in 77: {%d}\n", n);

    n = occurences(7);
    printf("\n No. of 7 in 7: {%d}\n", n);

    n = occurences(97);
    printf("\n No. of 7 in 97: {%d}\n", n);

    n = occurences(70);
    printf("\n No. of 7 in 70: {%d}\n", n);

    n = occurences(170);
    printf("\n No. of 7 in 170: {%d}\n", n);

    n = occurences(47875);
    printf("\n No. of 7 in 47875: {%d}\n", n);

    n = occurences(67);
    printf("\n No. of 7 in 67: {%d}\n", n);

    n = occurences(7777);
    printf("\n No. of 7 in 7777: {%d}\n", n);

    n = occurences(770);
    printf("\n No. of 7 in 770: {%d}\n", n);

    n = occurences(707);
    printf("\n No. of 7 in 707: {%d}\n", n);

    n = occurences(077);
    printf("\n No. of 7 in 077: {%d}\n", n);
}