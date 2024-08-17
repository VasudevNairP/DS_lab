#include<stdio.h>

void main()
	{
	int n, i, x, flag=0, mid, time;time++;
	printf("enter length of array:");time++;
	scanf("%d", &n);time++;
	int a[n], left, right=n-1;
	printf("enter elements for the array\n");time++;
	for(i=0;i<n;i++)
		{
		time++;
		scanf("%d",&a[i]);time++;
		}
	time++;
	printf("enter the number to be searched");time++;
	scanf("%d",&x);time++;
	while(left<=right)
		{
		time++;
		mid=(left+right)/2;time++;
		if(x==a[mid])
			{
			time++;
			flag=1;time++;
			break;
			}
		else if(x>a[mid])
			{
			time++;
			left=mid+1;time++;
			}
		else if(x<a[mid])
			{
			time++;
			right=mid-1;time++;
			}
		}
	if(flag==0)
		{
		time++;
		printf("element not found");time++;
		}
	else 
		{
		printf("element found\n");time++;
		}
	printf("space complexity=%d\n",32+4*n);time++;
	time++;
	printf("time complexity=%d\n",time);
	}
