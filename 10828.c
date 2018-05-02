#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct num
{
    int data;
    struct num *next;
} NUM;

typedef struct list
{
    NUM *head;
    int n;
} LIST;

void push(LIST *plist, int input)
{
    NUM *tmp;
	tmp = (NUM*)malloc(sizeof(NUM));
    tmp.data = input;
    tmp.next = list->head;
    plist->head = tmp;
	plist->n++;
}

int pop(LIST *plist)
{
	NUM *tmp;
	int tmpnum;
	tmp = plist->head;
	plist->head = tmp->next;
	tmpnum = tmp->data;
	free(tmp);
	return tmpnum;
}

int size(LIST *plist)
{
	return plist->n;
}

int empty(LIST *plist)
{
	if (plist->head == NULL)
		return 1;
	else
		return 0;
}

int top(LIST *plist)
{
	if (empty(plist))
		return -1;
	else
		return plist->head->data;
}

int main(void)
{
    char argument[6];
    int number;
	int argnum;
	int i;
	LIST plist;

	scanf("%d", &argnum);
	for (i = 0; i < argnum; i++)
	{
		scanf("%s", argument);
		if (strcmp(argument, "push") == 0)
		{
			scanf("%d", &number);
			push(&plist, number);
		}
		else if (strcmp(argument, "pop"))
		{
			printf("%d\n", pop(&plist));
		}
		else if (strcmp(argument, "size"))
		{
			printf("%d\n", size(&plist));
		}
		else if (strcmp(argument, "empty"))
		{
			printf("%d\n", empty(&plist));
		}
		else if (strcmp(argument, "top"))
		{
			printf("%d\n", top(&plist));
		}
	}
	return 0;
}