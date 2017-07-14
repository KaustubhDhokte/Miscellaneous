#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//    int arr[2], i;
//    int *ptr = arr;
//    int *ptr_new;
    
//    arr[0] = 10; 
//    arr[1] = 20;      
    
//    // incorrect use of new_ptr: undefined behaviour
//    ptr_new = (int *)realloc(ptr, sizeof(int)*3);
//    *(ptr_new + 2) = 30;
    
//    for(i = 0; i < 3; i++)
//      printf("%d ", *(ptr_new + i));
 
//    getchar();
//    return 0;
// }

/* Output: Code crashed*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr = (int *)malloc(sizeof(int)*2);
   int i;
   int *ptr_new;
    
   *ptr = 10; 
   *(ptr + 1) = 20;
    
   ptr_new = (int *)realloc(ptr, sizeof(int)*3);
   *(ptr_new + 2) = 30;
   for(i = 0; i < 3; i++)
       printf("%d ", *(ptr_new + i));
 
   getchar();
   return 0;
}

// Output: 10, 20, 30
