#include<stdio.h>
#include<stdlib.h>
int num(int n,int h)
{
    if(n==0)
        return h;
    int z=n%10;
    h+=z;
    return num(n/10,h);
}
void num_digit(int n,int h,int max,int min,int k)
{
    if(n==0)
    {
        printf("Number of odd digits is: %d\n",k);
        printf("Maximum digit is : %d\n",max);
        printf("Minimum digit is : %d\n",min);
        printf("sum of digit is");
        while(h>9)
        {
            printf(" => %d",h);
            h=num(h,0);
        }
        printf(" => %d",h);
        return ;
    }
    int z;
    z=n%10;
    if(z%2!=0)
        k++;
    h+=z;
    if(max<z)
        max=h;
    if(min>z)
        min=z;
    return num_digit(n/10,h,max,min,k);
}
int main()
{
    int n;
    printf("Enter the no : ");
    scanf("%d",&n);
    num_digit(n,0,0,0,0);
    return 0;
}
