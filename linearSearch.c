#include<stdio.h>

void main()
	{
	int n, i, x, count=0, time;time++;
	printf("enter length of array:");time++;
	scanf("%d", &n);time++;
	int a[n];
	printf("enter elements for the array\n");time++;
	for(i=0;i<n;i++)
		{
		time++;
		scanf("%d",&a[i]);time++;
		}
	time++;
	printf("enter the number to be searched");time++;
	scanf("%d",&x);time++;
	for(i=0;i<n;i++)
		{
		time++;
		if(a[i]==x)
			{
			time++;
			count++;
			printf("required number found at %d\n", i+1);time++;
			}
		}
	time++;
	if(count==0)
		{
			time++;
			printf("element not found");time++;
		}
	else
		{
			printf("element found %d time(s)\n", count);time++;
		}
	printf("space complexity=%d",20+4*n);time++;
	time++;
	printf("time complexity=%d",time);
	}
	
	
