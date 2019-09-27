#include <stdio.h>
#define false 0
#define true 1
#define maxsize 10

//定义线性表的结构
typedef struct {
	int list1[maxsize];
	int length;
}sqlist;

//初始化线性表
int initlist(sqlist* l)
{
	l->length = 0;
	return true;
}

//向线性表插入数据
int insertlist(sqlist *l, int i, int e)
{
	int k;
	if (i > l->length || i<1 || i>maxsize)
		return false;
	if (i < l->length)
	{
		for ( k = l->length - 1; k >= i; k--) 
		{
			l->list1[k + 1] = l->list1[k];
		}
	}
	l->length++;
	l->list1[i - 1] = e;
	return true;
} 
//查询线性表
int getlist(sqlist l, int i, int *e)
{
	if (i >= l.length)
		return false;
	else {
		*e = l.list1[i - 1];
		return true;
	}
}

//从线性表中删除数据
int deletelist(sqlist* l, int i, int* e)
{
	int k;
	if (i<1 || i>l->length)
		return false;
	*e = l->list1[i - 1];
	if (i < l->length)
	{
		for (k = i; k < l->length; k++)
			l->list1[k - 1] = l->list1[k];
	}
	l->length--;
	return true;
}

//显示线性表
int seelist(sqlist l)
{
	int i;
	for (i = 0; i < l.length; i++)
			printf("%4d",l.list1[i]);
	return true;
}

//测试方法
int main(void)
{
	int i,data,k2;
	sqlist s1;
	i = initlist(&s1);
	if (i == 1)
	{
		puts("线性性表创建成功，请输入5个元素：");
		for (i = 0; i < 5; i++)
		{
			insertlist(&s1, i + 1, i);
		}
	}

	seelist(s1);
	deletelist(&s1, 4, &data);
	printf("被删除的元素：%d", data);
	printf("\n已经打印");
	return 0;
}
