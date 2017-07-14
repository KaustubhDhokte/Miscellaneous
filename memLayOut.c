//http://www.geeksforgeeks.org/memory-layout-of-c-program/
#include <stdio.h>
 
int global = 10; /* initialized global variable stored in DS*/
 
int main(void)
{
    static int i; /* Initialized static variable stored in DS*/
    return 0;
}

/*kaustubh@kaustubh-Inspiron-3521:~/Documents$ size memLayOut
   text    data     bss     dec     hex filename
   1099     548      12    1659     67b memLayOut
kaustubh@kaustubh-Inspiron-3521:~/Documents$*/