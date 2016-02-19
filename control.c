#include "csapp.h"

void *thread(void *vargp);

int main()
{
    pthread_t tid;
    pthread_create(&tid, NULL, thread, NULL);
    exit(0);
}

/*thread routine*/
void *thread(void *vargp)
{
    sleep(1);
    printf("Hello world!");
    return NULL;
}

