#include<stdio.h>
#include<stdlib.h>
void f(int a[],int j)
{
	int t,s=0;
	while(s<j)
	{
		t=a[s];
		a[s]=a[j];
		a[j]=t;
		s++;
		j--;
	}
}
void f1(int a[],int n)
{
	int t,j;
	for(j=0;j<=n/2;++j)
	{
		t=a[j];
		a[j]=a[n-j];
		a[n-j-1]=t;
	}
}
int max_index(int a[],int n)
{
	int t,i;
	/*for(j=0;j<n;++j)
	{
		if(t<a[j])
		{
			t=a[j];
			k=j;
		}
	}*/
	for(t=0,i=0;i<n;++i)
	{
		if(a[i]>a[t])
			t=i;
	}
	return t;
}
void print(int a[],int n)
{
	printf("\nArray after flipping till max int\n");
	int i;
	for(i=0;i<n;++i)
	{
		printf("%d ",a[i]);
	}
}
void print1(int a[],int n)
{
	printf("\nArray after flipping entire array\n");
	int i;
	for(i=0;i<n;++i)
	{
		printf("%d ",a[i]);
	}
}
int sort(int *a,int n)
{
	/*int m=n;
	if(i==0)
		return;
	//print(a,n);
	int x=max_index(a,i);
	f(a,x+1);
	print(a,m);
	f(a,m);
	print(a,m);
	sort(a,m,i-1);*/
	int j;
	for(j=n;j>1;--j)
	{
		int x=max_index(a,j);
		if(x!=j-1)
		{
			f(a,x);
			print(a,n);
			f(a,j-1);
			print1(a,n);
		}
	}
}

int main()
{
	int n;
	printf("The no integers in array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the integers \n");
	int i;
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	/*printf("\nArray before sorting \n");
	for(i=0;i<n;++i)
	{
		printf("%d ",a[i]);
	}*/
	sort(a,n);
	printf("\n");
	//print(a,n);
	return 0;
}
