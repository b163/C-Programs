#include<stdio.h>
#include<malloc.h>

struct node
{	int info;
	struct node *nxt;
};
typedef struct node nd;

int main()
{
	int x,ch,c;
	//char ; 
	nd *s,*p,*t;
	p=NULL;
	s=NULL;
	t=NULL;

	
	do{  
	
	printf("1.........add\n2..........display\n3.......delete\n");
	scanf("%d",&ch);
	
	switch(ch)
	
	
		case 1:
			{
					p=(nd *)malloc(sizeof(nd));
								
								if(p==NULL)
								{printf("ghguihfjghoy");
								}
								else
								{
									printf("Enter x  ");
									scanf("%d",&x);
									
									p->info=x;
									p->nxt=NULL;
									
								}
								
								if(s==NULL)
								{s=p;
								}
								else
								{p->nxt=s;
								s=p;
								}
			
				break;
			}
		case 2:
			{
								printf("DISPLAY          ");	
								while(s!=NULL)
								{printf("    %d",s->info);
								s=s->nxt;
								}
				
				break;
			}
			
		case 3:
			{
								t=s;
								s=s->nxt;
								printf("Deleted Element is  %d",t->info);
								free(t);
								break;
			}
	}
	
	printf("Do you want to continue..1-y  / 2- n");
	scanf("%d",&c);
		}while(c==1);
	
	
return 0;
}



