#include<stdio.h>
#define max 7

void ins(int [],int *,int *);
void del(int [],int *);
void dis(int [],int *,int *);

void main()
{ int ch,q[max];
int f=-1,r=-1;
	do{
		printf("\n\n1   2    3     4\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
		
		case 1:

			ins(q,&r,&f);
			if(*f==-1)		        	  //...
			{*f=0;
			}
			break;
			
		case 2:	
			del(q,&f);   				 //if(f=r+1) then f=-1 and r=-1.
			if(*f==(*r+1))
			{*f=-1;
			 *r=-1;
			}
			break; 
			
		case 3:
			dis(q,&r,&f);
			break;  
		}
	}while(ch!=4);
}


void ins(int q[],int *r,int *f)
{ int x;
		
	if(*r==max-1)
	{printf("fulllllllll");
	}
	else
	{ *r=*(r+1);
	printf("Enter x----------");
	scanf("%d",&x);
	q[*r]=x;
	}
	
}

void del(int q[],int *f)
{ int X;
	if(*f==-1)
	printf("Emptyyyyyyyyyyy");
	else
	{X=q[*f];
	*f=*(f+1);
	printf("deleted ====%d",X);
	}

}  

void dis(int q[],int *r,int *f)
{ int i;
	if(*f==(-1)&& *r==(-1))
	{printf("Noting to showwwwwwwww");
	}
	else
	{printf("Elements are...........");
	for(i=*f;i<(*r);i++)
	printf("     %d",q[i]);
	
	}
}  
