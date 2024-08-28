#include<stdio.h>
void main()
{
	int a[20],n,j,temp,i,t=0;t++;
	printf("Enter the size of array");t++;
	scanf("%d",&n);t++;
	printf("Enter the elements of array");t++;
	for( i=0;i<n;i++) {
		t++;
		scanf("%d",& a[i]);
	}
	t++;
	for (i = 0; i < n - 1; i++) {
 		t++;
 		for (j = 0; j < n - i - 1; j++) {
 			t++;
            		if (a[j] > a[j + 1]) {
            			int temp = a[j+1];t++;
    				a[j+1] = a[j];t++;
   				 a[j] = temp;t++;
			}
		
		}
		t++;
	}
	t++;
	printf("Sorted array: ");
	t++;
	for (i = 0; i <n; i++) {
		t++;
        	printf("%d ", a[i]);t++;
   		 printf("\n");t++;
	}
	t++;
	printf("The space complexity  is %d ",((5*4)+(4*n)));
	printf(" The time complexity  is %d ", t);
}
