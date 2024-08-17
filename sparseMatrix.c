#include<stdio.h>
void main()
	{
	int r, c, i, j, k=1;
	printf("enter row and collumn:");
	scanf("%d", &r);
	scanf("%d", &c);
	int a[r][c],b[50][3];
	printf("enter %d matrix elements",r*c);
	for(i=0;i<r;i++)
		{
		for(j=0;j<r;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
	printf("\nentered matrix is\n");
	for(i=0;i<r;i++)
		{
		for(j=0;j<r;j++)
			{
			printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	b[0][0]=r;b[0][1]=c;
	for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
			{
			if(a[i][j]!=0)
				{
				b[k][0]=i;b[k][1]=j;b[k][2]=a[i][j];
				k++;
				}
			}
		}
	b[0][2]=k-1;
	printf("sparse matrix representation is:-\n");
	for(i=0;i<k;i++)
		{
		printf("%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]);
		}
	}
