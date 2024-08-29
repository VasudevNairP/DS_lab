#include<stdio.h>
int n, queue[15], front =-1, rear=-1;
void enqueue(int x)
{
	if(rear==n-1)
		printf("Overflow\n");
	else if(front==-1 && rear==-1) {
		front=rear=0;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}
void dequeue()
{
 	if(front==-1 && rear==-1)
 		printf("Underflow\n");
	 else if(front==rear)
	 	front=rear=-1;
	 else{
		printf("%d is removed from the queue ",queue[front]);
 		front++;
 	}
}
void display()
{
 	if(front==-1 && rear==-1)
 		printf("the queue is empty ");
 	else 
 	{
		for(int i=front;i<(rear+1);i++)
 		{
			printf("%d\n",queue[i]);
 		}
 	}
}
void main()
{
	int c=0,s;
	printf("Enter the maximum size of the queue\n");
	scanf("%d",&n);
	while(c!=4)
	{
		printf("Choose the operation you need to perform\n");
		printf("1.enqueue\n");
		printf("2.dequeue\n");	
		printf("3.display\n");
		printf("4.stop\n");	
		scanf("\n%d",&c);

	
	
		if(c==1)
		{	printf("Enter the number to be entered\n");
			scanf("%d",& s);
			enqueue(s);
		}
		else if(c==2)	
		{	dequeue();
		}
		else if(c==3)
		{	display();
		}
		else if(c==4)
		{	printf("Code executed successfully\n");
		}
		else
			printf("Invalid Function\n");
	}
}

