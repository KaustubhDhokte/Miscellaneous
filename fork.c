#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
// int main(){
// int a, b=0;
// b++;
// printf("b %d\n", b);
// printf("Process 1");
// a = fork(); //make two process which run same program after this instruction
// printf("Hello world!: a = %d\n", a);
// printf("P2");
// b++;
// printf("b %d\n", b);
// return 0;
// }
int main()
{
    fork();
    fork();
    fork();
    printf("hello\n");
    return 0;
}