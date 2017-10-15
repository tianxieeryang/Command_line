#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"linktable.h"
void InitMenuData(tLinkTable ** pLinkTable);
int CmdHelp();
int CmdHello();
int CmdQuit();
int CmdAdd();
int CmdSub();
int CmdMul();
int CmdDiv();
int CmdSmaller();
#define CMD_MAX_LEN     128
#define DESC_LEN    1024
#define CMD_NUM        10
tLinkTable * head=NULL;
/* Menu program */
int main()
{
    char *cmd;
    tDataNode *cmd_pointer;
    InitMenuData(&head);
    printf("menu cmd\n");
    while(1)
    {
    printf("Please input cmd:\n");
    scanf("%s",cmd);
    cmd_pointer=FindCmd(head,cmd);
    if(cmd_pointer == NULL)
    {
            printf("The cmd is not copmuter common cmd or it is wrong £¡\n");
        continue;
    }
    cmd_pointer->hindler();
    }
    return 0;
}
void InitMenuData(tLinkTable ** pLinkTable)
{
    *pLinkTable = CreateLinkTable();
    tDataNode * pNode=(tDataNode *)malloc(sizeof(tDataNode));
    pNode->cmd="help";
    pNode->desc="This is a help cmd.";
    pNode->hindler=CmdHelp;
    AddLinkTableNode(*pLinkTable,(tLinkTableNode *) pNode);
    pNode=(tDataNode *)malloc(sizeof(tDataNode));
    pNode->cmd="hello";
    pNode->desc="This is a hello cmd.";
    pNode->hindler=CmdHello;
    AddLinkTableNode(*pLinkTable,(tLinkTableNode *) pNode);
    pNode=(tDataNode *)malloc(sizeof(tDataNode));
    pNode->cmd="quit";
    pNode->desc="Quit the program.";
    pNode->hindler=CmdQuit;
    AddLinkTableNode(*pLinkTable,(tLinkTableNode *) pNode);
    pNode=(tDataNode *)malloc(sizeof(tDataNode));
    pNode->cmd="add";
    pNode->desc="Add two numbers together.";
    pNode->hindler=CmdAdd;
    AddLinkTableNode(*pLinkTable,(tLinkTableNode *) pNode);
    pNode=(tDataNode *)malloc(sizeof(tDataNode));
    pNode->cmd="sub";
    pNode->desc="Subtraction of two numbers.";
    pNode->hindler=CmdSub;
    AddLinkTableNode(*pLinkTable,(tLinkTableNode *) pNode);
    pNode=(tDataNode *)malloc(sizeof(tDataNode));
    pNode->cmd="mul";
    pNode->desc="Multiplication of two numbers.";
    pNode->hindler=CmdMul;
    AddLinkTableNode(*pLinkTable,(tLinkTableNode *) pNode);
    pNode=(tDataNode *)malloc(sizeof(tDataNode));
    pNode->cmd="div";
    pNode->desc="The number of division.";
    pNode->hindler=CmdDiv;
    AddLinkTableNode(*pLinkTable,(tLinkTableNode *) pNode);
    pNode=(tDataNode *)malloc(sizeof(tDataNode));
    pNode->cmd="smaller";
    pNode->desc="Find smaller number.";
    pNode->hindler=CmdSmaller;
    AddLinkTableNode(*pLinkTable,(tLinkTableNode *) pNode);
}
int CmdHelp()
{
    printf(
        "******************************Help*******************************\n"
        "*\t\t\t\t\t\t\t\t*\n"
        "*\tThis menu program is coded by Zhang Yu. Version 1.0\t*\n"
        "*\t\t\t\t\t\t\t\t*\n"
        "*\thelp\t\tShow the help list\t\t\t*\n"
        "*\tadd\t\tAdd two numbers together\t\t*\n"
        "*\tsub\t\tSubtraction of two numbers\t\t*\n"
        "*\tmul\t\tMultiplication of two numbers\t\t*\n"
        "*\tdiv\t\tThe number of division\t\t\t*\n"
        "*\tsmaller\t\tFind smaller number\t\t\t*\n"
        "*\thello\t\tSay hello\t\t\t\t*\n"
        "*\tquit\t\tQuit menu program\t\t\t*\n"
        "*\t\t\t\t\t\t\t\t*\n"
        "*****************************************************************\n\n"
        );
    return 1;
}
int CmdHello()
{
    printf("Hello!This is cmd menu.\n");
    return 1;
}
int CmdQuit()
{
    exit(0);
    return 1;
}
int CmdAdd()
{
    int a,b,c;
    printf("Please input two number(int):\n");                                                                                  printf("First number:\n");
    scanf("%d",&a);
    printf("Second number:\n");
    scanf("%d",&b);
    c=a+b;
    printf("%d add %d is %d!\n",a,b,c);
    return 1;
}
int CmdSub()
{
    int a,b,c;
    printf("Please input two number(int):\n");                                                                                  printf("First number:\n");
    scanf("%d",&a);
    printf("Second number:\n");
    scanf("%d",&b);
    c=a-b;
    printf("%d sub %d is %d!\n",a,b,c);
    return 1;
}
int CmdMul()
{
    int a,b,c;
    printf("Please input two number(int):\n");                                                                                  printf("First number:\n");
    scanf("%d",&a);
    printf("Second number:\n");
    scanf("%d",&b);
    c=a*b;
    printf("%d sub %d is %d!\n",a,b,c);
    return 1;
}
int CmdDiv()
{
    int a,b,c;
    printf("Please input two number(int):\n");                                                                                  printf("First number:\n");
    scanf("%d",&a);
    printf("Second number:\n");
    scanf("%d",&b);
    c=a/b;
    printf("%d sub %d is %d!\n",a,b,c);
    return 1;
}  
int CmdSmaller()
{
    int a,b,c;
    printf("Please put two numbers(int):\n");
    scanf("%d",&a);
    printf("Second number:\n");
    scanf("%d",&b);
    c=a>b?b:a;
    printf("The smaller one is %d\n",c);
    return 1;
}
