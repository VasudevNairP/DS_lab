#include<stdio.h>
void main()
	{
	int n, i, j, temp,time=0;time++;
	printf("enter length of array:");time++;
	scanf("%d", &n);time++;
	int a[n];
	printf("enter elements for the array\n");time++;
	for(i=0;i<n;i++)
		{time++;
		scanf("%d",&a[i]);time++;
		}
	i=1;time++;
	while(i<n)
	{
		temp=a[i];time++;
		j=i-1;time++;
		while((j>=0)&&(temp<a[j]))
		{
			a[j+1]=a[j];time++;
			j--;time++;
		}
		
		a[j+1]=temp;time++;
		i++;time++;
	}
	printf("sorted elements are\n");time++;
	for(i=0;i<n;i++)
		{time++;
		printf("%d\n",a[i]);time++;
		}
	printf("space complexity=%d\n",20+4*n);time++;
	time++;
	printf("time complexity=%d\n",time);
	}
