#include <stdio.h>
#include <stdlib.h>

struct node
{
	int expo;
	int coef;
	struct node *link;
};

struct node* createNode(int coef, int expo)
{
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->coef=coef;
	newNode->expo=expo;
	newNode->link=NULL;
	return newNode;
}

void appendNode(struct node **head, int coef, int expo)
{
	struct node *newNode = createNode( coef, expo);
	if(*head==NULL)
	{
		*head = newNode;
	}
	else
	{
		struct node *temp = *head;
		while(temp->link!=NULL)
		{
			temp = temp->link;
		}
		temp->link = newNode;
	}
}

void printPoly(struct node *head)
{
	struct node *temp = head;
	while(temp != NULL)
	{
		printf("%dX^%d\t", temp->coef, temp->expo);
		temp = temp->link;
		if(temp != NULL)
		{
			printf("+\t");
		}
	}
}

struct node* addPoly(struct node *p, struct node *q)
{
	struct node* result = NULL;
	
	while(p != NULL && q != NULL)
	{
		if(p->expo > q->expo)
		{
			appendNode(&result, p->coef, p->expo);
			p = p->link;
		}
		else if(p->expo < q->expo)
		{
			appendNode(&result, q->coef, q->expo);
			q = q->link;
		}
		else
		{
			int sum = p->coef + q->coef;
			appendNode(&result, sum, p->coef);
			q = q->link;
			p = p->link;
		}
	}
	while(p!=NULL)
	{
		appendNode(&result, p->coef, p->expo);
	}
	while(q!=NULL)
	{
		appendNode(&result, q->coef, q->expo);
	}
	return result;
}

int  main()
{
    struct node* phead = NULL;
    struct node* qhead = NULL;
	struct node* rhead = NULL;
	int p,q;
	
	printf("Polynomial P\n");
	printf("Enter no of terms of 1st polynomial:\n");
	scanf("%d",&p);
	printf("Enter the elements of the 1st polynomial in descending order:\n");
	for (int i = 1; i <= p; i++) 
	{
		int coef, expo;
		printf("%d. Enter the coefficient: ", i);
		scanf("%d", &coef);
		printf("%d. Enter the exponent: ", i);
		scanf("%d", &expo);
		appendNode(&phead, coef, expo);
	}
	
	printf("Polynomial Q\n");
	printf("Enter no of terms of 2nd polynomial:\n");
	scanf("%d",&q);
	printf("Enter the elements of the 2nd polynomial in descending order:\n");
	for (int i = 1; i <= q; i++) 
	{
		int coef, expo;
		printf("%d. Enter the coefficient: ", i);
		scanf("%d", &coef);
		printf("%d. Enter the exponent: ", i);
		scanf("%d", &expo);
		appendNode(&qhead, coef, expo);
	}
	
	printf("Polynomial P is ");
	printPoly(phead);
	
	printf("\nPolynomial Q is ");
	printPoly(qhead);
	
	rhead=addPoly(phead, qhead);
	printf("\nResultant Polynomial is ");
	printPoly(rhead);
	
	return 0;
}