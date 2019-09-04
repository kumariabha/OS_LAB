#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int i,pid;
	int total=0;
	for(i=0;i<10;i++)
	{
		if(i %2==0)
		{
		pid=fork();
		
	if(pid==0){
		total=total+1;
	printf("hello\n");
	printf("%d",total);
	}
		}
	}
	return 0;
}
