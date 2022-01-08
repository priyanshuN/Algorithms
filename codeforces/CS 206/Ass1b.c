#include<stdio.h>

int addpaths(int n, int v)
{
  if (n<=1)
    return n;
  int t = 0,i;
  for(i = 1; i<=v && i<=n; i++)
    t+=addpaths(n-i,v);
  return t;
}
 
void steps(int n, int cur_i, int c[])
{
  if (n < 0) 
  return;
  if (n == 0)
  {
    int i;
    for (i=cur_i-1;i>=0;i--)
    {
      if(i<cur_i-1)
        printf("%d ",c[i]-c[i+1]);
      else
        printf("%d ",c[i]);
    }
    printf("\n");
    return;
  }
    c[cur_i] = n;
    steps(n-1, cur_i+1, c);
    steps(n-2, cur_i+1, c);
    steps(n-3, cur_i+1, c);
}
int main()
{
  int n;
  printf("Enter the total number of stairs : ");
  scanf("%d",&n);
  int a[n];
  printf("Possible paths are :\n");
  steps(n,0,a);
  printf("\nTotal number of ways= %d\n",addpaths(n+1,3));
}