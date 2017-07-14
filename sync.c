#include <stdio.h>
#include <pthread.h>
unsigned int count;

void *increment_count(void *arg)
{
    printf("Hello Increment!\n");
}

void *decrement_count(void *arg)
{
    printf("Hello decrement!\n");
}

int main()
{
    pthread_t thread1, thread2;
    void *(*fptr_incr)(void *);
    void *(*fptr_decr)(void *);

    fptr_incr = &increment_count;
    fptr_decr = &decrement_count;

    //fptr_incr(NULL);
    //fptr_decr(NULL);

    pthread_create(&thread1, NULL, fptr_incr, NULL);
    pthread_create(&thread2, NULL, fptr_decr, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    //pthread_exit(NULL);
    printf("Hello World!\n");
}
