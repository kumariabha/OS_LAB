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
	printf("I am child process\n");
	}
	else if (pid>0)
	{
		printf("I am parent process\n");
	}
	else
	{
//execlp("le", " ", NULL);
	printf("error");
		exit(0);
	}
}
