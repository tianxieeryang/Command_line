#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"

int Help();
int Quit();

#define CMD_MAX_LEN   128
#define CMD_NUM       20
#define CMD_DESC      1024

static tDataNode head[] =
{
    {"help", "this is help command!", Help, &head[1]},
    {"version", "menu program v1.0", NULL, &head[2]},
    {"quit", "Quit from menu",  Quit, NULL}
};

int main()
{
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Input a cmd number -->");
        scanf("%s", cmd);
        tDataNode *p = FindCmd(head, cmd);
        if(p == NULL)
        {
            printf("This is a wrong cmd!\n");
            continue;
        }
        printf("%s - %s\n", p->cmd, p->desc);
        if(p->handler != NULL)
        {
            p->handler();
        }
    }
}

int Help()
{
    ShowAllCmd(head);
    return 0;
}

int Quit()
{
    exit(0);
}
