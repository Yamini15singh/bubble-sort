#include<stdio.h>
#include<conio.h>
#define max 10
#include<process.h>
void main()
	{
	int a[max],i,j,n,temp;
	clrscr();
	printf("\nEnter the number of elements in array : ");
	scanf("%d",&n);
		if(n>max)
		{
		printf("\nElements out of array size ");
		getch();
		exit(0);
		}
	printf("\nEnter the unsorted elements in the array......... ");
		for(i=0;i<n;i++)
		{
		printf("\nEnter %d location element ",i);
		scanf("%d",&a[i]);
		}
	printf("\nElement before sorting are .....");
		for(i=0;i<n;i++)
		printf("\n %d location element is %d",i,a[i]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
			}
		}
	printf("\nElements after sorting in ascending order .........");
	for(i=0;i<n;i++)
	printf("\n %d location element is %d",i,a[i]);
getch();
}