#include<stdio.h>
#include<stdlib.h>

int  totalways(int m, int n)
{
   if (m == 1 || n == 1)
        return 1;
   return  totalways(m-1, n) + totalways(m, n-1);
}

void way(int *m1, int i, int j, int m, int n, int *p, int t)
{
	if (i==m-1)
	{
		int x,k;
		for (k=j;k<n;k++)
			p[t+k-j] = *((m1 + i*n) + k);
		for (x=1;x<t+n-j;x++)
		{
			if(p[x]-p[x-1]==1)
			    printf("move Left -> ");
			else
			    printf("move Down -> ");   
		}
		printf("\n\n");
		return;
	}
	if (j==n-1)
	{
		int k,x;
		for (k=i;k<m;k++)
			p[t+k-i] = *((m1 + k*n) + j);
		for (x=1;x<t+m-i;x++)
		{
			if(p[x]-p[x-1]==1)
				printf("move Left -> ");
			else
			    printf("move Down -> ");
		}
		printf("\n\n");
		return;
	}
	p[t] = *((m1 + i*n) + j);
	way(m1, i+1, j, m, n, p, t+1);
	way(m1, i, j+1, m, n, p, t+1);
}
void paths(int *m1, int m, int n)
{
	int *p = (int *)malloc((m+n) * sizeof(int));
	way(m1, 0, 0, m, n, p, 0);
}
int main()
{
	int i,j,r,c,z=1;
	printf("Enter the row number :");           //row no start from 1
	scanf("%d",&r);
	printf("Enter the column number :");         //column no start from 1
	scanf("%d",&c);
	printf("\n");
	printf("Total no ways to reach home point is : %d\n\n",totalways(r,c));
	int m1[r][c]; 
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			m1[i][j]=z++;
		}
	}
	printf("All possible path is as follows :\n\n");
	paths(*m1, i, j);
	return 0;
}
