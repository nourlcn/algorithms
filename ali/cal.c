#include <stdio.h>
#include <stdlib.h>

int total = 0;
typedef int ElementType;

struct node{
	ElementType num;
	struct node *next;	
};

struct node* creat_empty()
{
	struct node *head = malloc(sizeof(struct node));
	head->next = NULL;
	return head;
}

struct node *push(struct node *head, ElementType number)
{
	struct node *one = malloc(sizeof(struct node));
	one->num = number;
	one->next = head->next;
	head->next = one;
	total ++;
	return head;
}

ElementType pop(struct node *head)
{
	if (total < 1)
	{
		printf("len of stack < 1");
		exit(0);
	}

	ElementType re= head->next->num;
	struct node *del = head->next;
	head->next = head->next->next;
	
	free(del);
	total --;

	return re;
}

void print_stack(struct node* head)
{
	int i=0;
	struct node *p = head->next;
	while(i < total)
	{
		printf("%d\t", p->num);
		p = p->next;
		i++;
	}
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		exit(0);
	}
	char *expr = argv[1];
	printf("expr is: %s\n", expr);
	
	struct node *head = creat_empty();

	int i=0;
	while(expr[i])
	{
		ElementType a;
		int b;
		switch (expr[i]){
			case '*':
				a = pop(head);
				b = atoi(&expr[i+1]);
				head = push(head,(a*b));
				i++;
				break;
			case '/':
				a = pop(head);
				b = atoi(&expr[i+1]);
				head = push(head,a/b);
				i++;
				break;
			case '+':
				push(head, -1);
				break;
			case '-':
				push(head, -2);
				break;
			default:
				push(head, atoi(&expr[i]));
				break;

		}
		
		i++;
	}

	if (total == 1)
	{
		printf("\nresult is %d\n", pop(head));
		return 0;
	}

	int value = 0;
	
	while(total > 1)
	{
		ElementType keep = pop(head);
		ElementType sign = pop(head);
		switch (sign){
			case -1: //+
				value += keep;		
				break;
			case -2: //-
				value -= keep;
				break;
			default:
				break;
		}

	}

	value += pop(head);

	print_stack(head);

	printf("\n result is: %d\n\n", value);
	
	return 0;
}
