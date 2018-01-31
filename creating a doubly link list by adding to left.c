/******************creating a doubly link list by adding to right*****************************/

#include<stdio.h>
#include<malloc.h>

typedef struct node
{
	struct node *pre;
	int info;
	struct node *nxt;
}nd;

int main()
{	int x;
	char c;
	nd *p,*t,*l,*r;
	p=l=r=t=NULL;
	
	
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
									p->pre=r;
									r->nxt=p;
									r=p;
								}
	printf("Do you want to continue   y/n");
	scanf("%s",&c);
			}while(c=='y');
			
			
			
			printf("\n\ndisplay");
			t=l;
			while(t->nxt!=NULL)
			{
				printf("   %d",t->info);
				t=t->nxt;
			}
			printf("  %d",t->info);
return 0;
}
