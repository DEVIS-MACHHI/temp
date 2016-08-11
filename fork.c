/********************CREATE CHILD PROCESS********************/

#include<stdio.h>
//#include<sys/types.h>
#include<unistd.h>
void main()
{

	if(fork()==0)
	{
		printf("IN CHILD PROCESS 1 CHILD_ID=%d PARENT_ID=%d\n",getpid(),getppid());

		intf("IN CHILD PROCESS 1 CHILD_ID=%d PARENT_ID=%d\n",getpid(),getppid());
	}
	else if(fork()==0)
	{

		printf("IN CHILD PROCESS 2 CHILD_ID=%d PARENT_ID=%d\n",getpid(),getppid());

	}
	else if(fork()==0)
	{
		printf("IN CHILD PROCESS 3 CHILD_ID=%d PARENT_ID=%d\n",getpid(),getppid());	

	}
	else
	{
	
		sleep(3);
		printf("IN PARENT PROCESS ID=%d\n",getpid());
	}



}

