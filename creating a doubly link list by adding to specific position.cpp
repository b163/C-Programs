/******************creating a doubly link list by adding to specific position*****************************/

#include<stdio.h>
#include<malloc.h>

typedef struct node
{
	struct node *pre;
	int info;
	struct node *nxt;
}nd;

int main()
{	int x,k,i;
	char c;
	nd *p,*f,*l,*r,*t,*ts;
	p=l=r=t=ts=f=NULL;
	
	
		do
		{
		
	
								p=(nd *)malloc(sizeof(nd));
								
								if(p==NULL)
								{printf("Memory cannot be allocated");
								}
								else
								{printf("Enter x");
								scanf("%d",&x);
								p->info=x;
								p->pre=NULL;
								p->nxt=NULL;
								}
								
								if(l==NULL && r==NULL)
								{
									l=p;
									r=p;
								}
								else
								{
									printf("Enter the positin you want to join");
									scanf("%d",&k);
									ts=l;
									t=l->nxt;
									for(i=1;i<k-1;i++)
									{
										ts=ts->nxt;
										t=t->nxt;
									}
									p->pre=ts;
									ts->nxt=p;
									p->nxt=t;
									t->pre=p;
								}
	printf("Do you want to continue   y/n");
	scanf("%s",&c);
			}while(c=='y');
			
			
			
			printf("\n\ndisplay");
			f=l;
			while(f->nxt!=NULL)
			{
				printf("   %d",f->info);
				f=f->nxt;
			}
			printf("  %d",f->info);
return 0;
}
