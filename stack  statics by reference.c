#include<stdio.h>
#define max 7

void ins(int [],int *,int);
void del(int [],int *);
void dis(int [],int *);


void main()

{  int a[max],ch,*t=-1,x;
	
	do{
		printf("\n1...ins\n2...del\n3...dis \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter x");
				scanf("%d",&x);
				ins(a,&t,x);
				break;
			case 2:
				del(a,&t);
				break;
			case 3:
				dis(a,&t);
				break;
				
		}
	}while(ch!=4);
}


void ins(int a[],int *t,int x)
{
	if(*t==max-1)
	{printf("fulllllllll");
	}
	else
	{
		*t=*t+1;
		a[*t]=x;
	}
	//return (t);
}



void del(int a[],int *t)
{int X;
	if(*t==-1)
	{
	printf("Emptyyyyyyyy");
	}
	else
	{X=a[*t];
	printf("Removed ==%d",X);
	*t=*t-1;
	}
	//return (t);
	
}


void dis(int a[],int *t)
{ int i;
	if(*t==-1)
	{printf("empty");
	}
	else
	{
	printf(" Total Elements  =======");
	for(i=*t;i>-1;i--)
	
	printf("   %d",a[i]);
	}
} 
