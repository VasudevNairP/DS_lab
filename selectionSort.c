#include<stdio.h>
void main()
	{
	int n, i, j, small, temp, time=0;time++;
	printf("enter length of array:");time++;
	scanf("%d", &n);time++;
	int a[n];
	printf("enter elements for the array\n");time++;
	for(i=0;i<n;i++)
		{
		time++;
		scanf("%d",&a[i]);time++;
		}
	i=0;time++;
	while(i<n-1)
	{
		small=i;time++;
		j=i+1;time++;
		while(j<n)
			{
			if(a[small]>a[j])
				{
				small=j;time++;
				}
			j++;time++;
			}
		if(i!=small)
		{
		temp=a[i];time++;
		a[i]=a[small];time++;
		a[small]=temp;time++;
		}
		i++;time++;
	}
	printf("sorted elements are\n");time++;
	for(i=0;i<n;i++)
		{
		time++;
		printf("%d\n",a[i]);time++;
		}
	printf("space complexity=%d",20+4*n);time++;
	time++;
	printf("time complexity=%d",time);
	}
