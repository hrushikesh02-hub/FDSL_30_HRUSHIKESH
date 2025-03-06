#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the number of array elements :");
	scanf("%d",&n);
	printf("Enter %d array elemenys",n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
			int temp=a[i];
			for(k=i-1;k>=j;k--)
			{
				a[k+1]=a[k];
			}
			a[j]=temp;
     			}
		}
	}	
	printf("The Sorted array is :\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
		}
	return 0;
}
