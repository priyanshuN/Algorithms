#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#include<stdio.h>
int main()
{
    int n,i;
    int a[100000];
    scanf("%d",&n);
    for(i=0;i<=n-1;i=i+1)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i=i-1)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

