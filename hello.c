#include "csapp.h"

void *thread(void *vargp);

int main()
{	
	int thread_num,i; 
    pthread_t tid;
	printf("Please input how many thread you want to create.\n");	
	scanf("%d", &thread_num);
	//printf("%d", thread_num);
	for(i=0 ;i< thread_num; i++)
	{
		pthread_create(&tid, NULL, thread, NULL);
		pthread_join(tid, NULL);
		printf("PID: %d\n",(int)tid);
	}
		exit(0);
}

/*thread routine*/
void *thread(void *vargp)
{
    printf("Hello world!\n");
    return NULL;
}

