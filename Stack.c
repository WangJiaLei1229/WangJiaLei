#include <stdio.h>
#include <stdlib.h>
#define maxsize 20

//C语言中实现bool类型；
typedef enum BOOLEAN
{
	true,
	false
}bool;

//结构栈
typedef struct st2{
	int top;
	int str[maxsize];
}CharStackSize , *CharStack;

//初始化栈
void initStack(CharStack cstack)
{
	cstack ->top = -1;
	return ;
}

//判空
bool CharisEmpty(CharStack cstack)
{
	if (cstack->top == -1) 
	{
		return true;
	}
	return false;
}

//判满
bool ChariskFull(CharStack cstack)
{
	if (cstack->top == maxsize - 1)
	{
		return true;
	}
	return false;
}

//元素进栈
bool CharPush(CharStack cstack, char ch)
{
	if (ChariskFull(cstack)) 
	{
		return false;
	}

	cstack->str[++cstack->top] = ch;
	return true;
}

//元素出栈
bool CharPop(CharStack cstack, char* ch)
{
	if (CharisEmpty(cstack)) 
	{
		return false;
	}
	ch = cstack->str[cstack->top--];
	return true;
}
