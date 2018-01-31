#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i,n;

    printf("enter limit");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("   %d",a[i]);
    }
}


