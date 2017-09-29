#include<stdio.h>

int main()
{
    int *p, i;
    p = (int *)malloc(10*sizeof(int));

    for(i=-4; i<0; i++)
        printf("p[%d] = %d\n", i, p[i]);
    //Output:  0,0,49,0

    // Try accessing p[-5]: Result- segmentation fault

    //Works Well
    p[-4] = 45450;
    printf("\n p[-4] = %d\n", p[-4]);

    //Crashes with error: Double Free or Corruption
    /*p[-1] = 48;
      free(p);*/

    //Works well
    p[-3] = 55455;
    printf("\n p[-3] = %d\n", p[-3]);

    //Works well
    /*p[-2] = 49;
    free(p);*/

    /* Segmentation fault
    p[-2] = 100;
    free(p);*/

    /* Crashes with: *** Error in `./a.out': munmap_chunk(): invalid pointer: 0x0000000001fc9010 ***
    p[-2] = 30;
    free(p);*/
    
    /* Crashes with *** Error in `./a.out': munmap_chunk(): invalid pointer: 0x0000000000b51010 ***
    p[-2] = 50;
    free(p);*/

    //Works well 
    /*p[-2] = 48;
    printf("p[-2] = %d\n", p[-2]);
    free(p);*/

    //Crashes with *** Error in `./a.out': free(): invalid size: 0x0000000001f26010 ***
    /*p[-2] = 40;
    free(p);*/

    /* Segmentation fault
    p[-2] = 45;
    free(p);*/
    
    /* *** Error in `./a.out': munmap_chunk(): invalid pointer: 0x0000000002547010 ***
    p[-2] = 46;
    free(p);*/

    /*  *** Error in `./a.out': munmap_chunk(): invalid pointer: 0x0000000001a60010 ***
    p[-2] = 47;
    free(p);*/

    /* *** Error in `./a.out': free(): invalid pointer: 0x00000000025a4010 ***
    p[-2] = 0;
    free(p);*/

    free(p);
    return 0;
}