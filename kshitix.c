#include <stdio.h>
int main()
{
	int n,i,j,temp;
	printf("enter the number of element:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
	return 0;
}