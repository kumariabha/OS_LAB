#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int pid;
	int status;

	pid=fork();
	if(pid==0)
	{
	printf("I am child process %d", getpid());
	printf("\n");
	}
	else if (pid>0)
	{
	      int tpid =wait(&status);
		printf("I am parent process %d",tpid);
		printf("\n");
	}
	else
	{
//execlp("le", " ", NULL);
	printf("error");
		exit(0);
	}
}
