/*
Static functions in C
1.7
Prerequisite : Static variables in C

In C, functions are global by default. 
The “static” keyword before a function name makes it static. For example, below function fun() is static.

static int fun(void)
{
  printf("I am a static function ");
}
Run on IDE
Unlike global functions in C, access to static functions is restricted to the file where they are declared.
Therefore, when we want to restrict access to functions, we make them static. 
Another reason for making functions static can be reuse of the same function name in other files.

For example, if we store following program in one file file1.c

// Inside file1.c
static void fun1(void)
{
  puts("fun1 called");
}
Run on IDE
And store following program in another file file2.c

// Iinside file2.c
int main(void)
{
  fun1(); 
  getchar();
  return 0;  
}
Run on IDE
Now, if we compile the above code with command “gcc file2.c file1.c”, we get the error “undefined reference to `fun1’” . 
This is because fun1() is declared static in file1.c and cannot be used in file2.c.

*/