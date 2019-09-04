#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int pid1;
	pid1=fork();
	int pid2=fork();
	if(pid1==0)
	{
	printf("I am child process\n %d", pid);
	printf("Child PPID= %d",getppid());
	printf("Child PID = %d",getpid());
	}
	else if (pid1>0)
	{
		printf("I am parent process\n %d",pid);
		printf("parentPID= %d",getpid());
		printf("Parent PPID= %d", getppid());
	}
	else
	{
//execlp("le", " ", NULL);
	printf("error");
		exit(0);
	}
}
