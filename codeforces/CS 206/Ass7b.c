#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define INT_MAX 9999999
const int M=99999;
int n,k,p,q;
void swap(float *a,float *b){
  float t=*a;
  *a=*b;
  *b=t;
}
int min(int x,int y)
{
    if(x<y)
        return x;
    else
        return y;
}
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
void print(int a[],int m)
{
    int i=0;
    for(i=0;i<m;++i)
        printf("%d",a[i]);
    printf("\n");
}
void summation(int a[],int n)
{
    int i,z=0;
    for(i=0;i<n;++i)
        z+=a[i];
    printf("%d",z);
}
void avgerage(int a[],int n)
{
    int i;
    int c[n];
    float b[n];
    for(i=0;i<n;++i)
    {
        c[i]=0;
        c[i]+=a[i];
    }
    b[0]=c[0];
    for(i=1;i<n;++i)
        b[i]=c[i]/(i+1);
    printf("%d",b[n-1]);
}
float avg(int n,int q,int p,int total[],int k){
	int r= n-p+1;
	int c= q-p+1;
	int d[r][c],i,j,j1;
	for(i=0;i<r;i++)
    {
		int h=0;
		for(j=p;j<=q;j++)
		{
			if(i+j>n)
				d[i][h]=INT_MAX;
			else
				d[i][h]=total[i+j]-total[i];
			h++;
		}
	}
    int ind=r*c,y=0;
    float d1[ind];
    for(i=0;i<r;i++)
    {
		for(j=0;j<c;j++)
		{
			d1[y++]=(float)d[i][j]/(j+p);
		}
	}
    for(i=0;i<ind;i++)
    {
        for(j=i+1;j<ind;j++)
        {
            if(d1[i]>d1[j])
                swap(&d1[i],&d1[j]);
        }
    }
	float w= d1[k-1];
	return w;
}

int main(){

	int n;
    printf("Enter the no of problems : ");
    scanf("%d",&n);
    int i,j;
    int a[n];
    printf("Enter the difficulties of respective questions\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
	printf("\nEnter lower limit size of set=p:");
	scanf("%d",&p);
    printf("\nEnter upper limit size of set =q :");
    scanf("%d",&q);
    printf("\nEnter the least size of set to be selected =k :");
    scanf("%d",&k);
    int total[n];
    total[0]=0;
	for(i=1;i<=n;i++)
    {
        total[i]=total[i-1]+a[i];
	}
	int h=n/p;
	if(h<k)
    {
		printf("Not possible\n");
	}
	else
    {
		float sol = avg(n,q,p,total,k);
		printf("\nAtmost value of D average difficulties of atleast K set is: %f\n",sol);
	}
	return 0;
}
