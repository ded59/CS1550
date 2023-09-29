#include <stdio.h>
#include <pthread.h>
#include <sched.h>

void *do_stuff(void *p) 
{
	printf("Hello from thread %d\n",
	*(int *)p);
}

int main() 
{
	pthread_t thread;
	int id, arg1, arg2, arg3, arg4;
	arg1 = 1;
	id = pthread_create(&thread,NULL,do_stuff,(void *)&arg1);

	arg2 = 2;
	id = pthread_create(&thread,NULL,do_stuff,(void *)&arg2);
	
	
	arg3 = 3;
	id = pthread_create(&thread,NULL,do_stuff,(void *)&arg3);

	arg4 = 4;
	id = pthread_create(&thread,NULL,do_stuff,(void *)&arg4);
	

	pthread_join(thread, NULL);
	return 0;
}