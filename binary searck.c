#include<stdio.h>

int bin(int [],int,int,int);

void main()
{	int l,i,k,a[10],lb,ub,p;
	printf("Enter tbhe no....");
	scanf("%d",&l);
	printf("Enter the numberssss.");
	for(i=0;i<l;i++)
	{scanf("%d",&a[i]);
	}
	
	printf("Enter k");
	scanf("%d",&k);
	
	lb=0;
	ub=(l-1);
	
	p=bin(a,k,lb,ub);
	
	if(p==-1)
	{printf("not found");
	}
	else
	{printf("positin is  ==%d",p+1);
	}
	
}

int bin(int a[],int k,int lb,int ub)
{ int x;
	
	x=(lb+ub)/2;
	
	if(a[x]==k)
	return (x);
	
	else if	(x>k)
	return(bin(a,k,lb,x));
		
	else
	return (bin(a,k,x,ub));
	
	
	if(lb>ub)
	{return (-1);
	}
		
	
}
