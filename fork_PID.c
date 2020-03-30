#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int pid;
	pid=fork();
	if(pid==0)
	{
	printf("I am child process, PID=\n %d", pid);
	printf("\n");
	}
	else if (pid>0)
	{
		printf("I am parent process, PID=\n %d",pid);
		printf("\n");
	}
	else
	{
//execlp("le", " ", NULL);
	printf("error");
		exit(0);
	}
}
