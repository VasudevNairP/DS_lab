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
	while(i<n-1)
	{
		j=i+1;time++;
		small=i; time++;
		while(j<n)
			{
			time++;
			if(a[small]>a[j])
				{
				time++;
				small=j;time++;
				j++;time++;
				}
			}
		if(i!=small)
		{
		temp=a[i];
		a[i]=a[small];
		a[small]=temp;
		}
		
	}
	printf("sorted elements are\n");time++;
	for(i=0;i<n;i++)
		{
		time++;
		printf("%d",a[i]);time++;
		}
	}
