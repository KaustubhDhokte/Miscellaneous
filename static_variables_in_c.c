#include <stdio.h>
void fun()
{
    // static variables get the default value as 0.
    static int x;
    printf("%d ", x);
    x = x + 1;
}
 
int main()
{
    fun();
    fun();
    return 0;
}
// Output: 0 1