#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void swap (int *a,int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
}
int main()
{
  int m;
  printf("Enter different no of activities : ");
  scanf("%d",&m);
  int i,j;
  int a[m],s[m],e[m],f[m],d[m];
  for(i=0;i<m;++i)
  {
    d[i]=i+1;
    printf("Enter the interest score of %d activity : ",i+1);
    scanf("%d",&a[i]);
    printf("Enter the start time of %d activity: ",i+1);
    scanf("%d",&s[i]);
    printf("Enter the end time of %d activity: ",i+1);
    scanf("%d",&e[i]);
    f[i]=(e[i]-s[i])*a[i];
    printf("\n");
  }
  for (i = 0; i < m-1; i++)
  {       
    for (j = 0; j < m-i-1; j++)
    { 
      if (e[j] > e[j+1])
      {
        swap(&e[j],&e[j+1]);
        swap(&s[j],&s[j+1]);
        swap(&d[j],&d[j+1]);
        swap(&f[j],&f[j+1]);
      }
    }
  }
  /*for(i=0;i<m;++i)
  {
    printf("%d %d %d %d\n",s[i],e[i],f[i],d[i]);
  }*/
  int max[m+1],cur[m+1],max1;
  cur[0]=0;
  max[0]=f[0];
  for(i=1;i<m;++i)
  {
    max[i]=max[i-1];
    for(j=1;j<=i;++j)
    {
      if(s[i]>=e[i-1])
      {
        max[i]=max[i]+f[i];
        cur[i]=i;
        break;
      }
      else 
      {
        if(s[i]>=e[i-j])
        {
          if(max[i]<max[i-j]+f[i])
          {
            max[i]=max[i-j]+f[i];
            int k;
            for(k=i;k>i-j;--k)
              cur[k]=i;
            break;
          }
          else
          {
            cur[i]=cur[i-1];
          }
        }
        else
        {
          cur[i]=cur[i-1];
        }
      }
    }
    //printf("%d ",cur[i]);
  }
  printf("\n");
  printf("Maximum utility obtained is : %d\n",max[m-1]);
  printf("Activity class chosen are : \n");
  if(cur[0]!=cur[1])
    printf("%d ",d[cur[0]]);
  for(i=1;i<m;++i)
  {
    //printf("%d ",cur[i]);
    if(cur[i]!=cur[i-1])
      printf("%d ",d[cur[i]]);
  }
  printf("\n");
  /*int n;
  printf("Enter the no activities to be performed : ");
  scanf("%d",&n);*/
  return 0;
}
