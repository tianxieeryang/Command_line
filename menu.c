#include<stdio.h>
#include<stdlib.h>

int main()
{
    char cmd[128];
    while (1)
    {
        scanf("%s", cmd);
	if(strcmp(cmd, "help") == 0)
	{
	    printf("This is help cmd!\n");	
	}
	else if(strcmp(cmd, "ls") == 0)
	{
	    printf("This is check file cmd!\n");	
	}
	else if(strcmp(cmd, "mkdir") == 0)
	{
	    printf("This is create a folder cmd!\n");	
	}
	else if(strcmpy(cmd, "echo") == 0)
	{
	    printf("This is echo cmd!\n");
	}
        else if(strcmpy(cmd, "install") == 0)
	{
	    printf("This is install cmd!\n")
	}
	else if(strcmpy(cmd, "quit") == 0)
	{
	    printf("This is quit cmd!\n");
	}
	else if(strcmpy(cmd, "read") == 0)
        {
	    printf("This is read cmd!\n");
	}
	else
	{
	    printf("This is undefine!\n");
	}
    }
    return 0;
}
