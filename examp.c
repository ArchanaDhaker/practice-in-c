#include<stdio.h>
void main()
{
	int a[10],b[10],c[20],i,j,k,m=0,temp;
	printf("enter 1st array");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("enter 2nd array");
	for(j=0;j<5;j++)
	scanf("%d",&b[j]);
	for(k=0;k<10;k++)
	{
		if(k<5)
		{
			c[k]=a[k];
		}
		else
		{
			c[k]=b[m];
			m++;
		}
	}
	for(k=0;k<10;k++)
	printf("%d ",c[k]);
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(c[j]>c[j+1]){
			
			temp=c[j];
			c[j]=c[j+1];
			c[j+1]=temp;
		}
		}
	}
	printf("\n");
	for(k=0;k<10;k++)
	printf("%d ",c[k]);
}
