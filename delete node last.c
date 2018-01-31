#include<stdio.h>
#include<malloc.h>
#include<conio.h>

typedef struct node 
{
	int info;
	struct node *nxt;
}nd;

int main()
{int c,x;
	nd *s,*p,*f,*t,*y;
	s=NULL;
	p=NULL;
	f=NULL;
	t=NULL;
	y=NULL;
	//z=NULL;
	do{
		printf("\nEntyer your choice\n1..add\n2..display\n3..delete\n");
		scanf("%d",&c);
		
		switch(c)
		{
			case 1:
				p=(nd *)malloc(sizeof(nd));
				
				if(p==NULL)
				{printf("hdweahdfhweiad");
				}
				else
				{
					printf("Enter x\t\t");
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
		
		case 2:
			if(s==NULL)
			{printf("Empty");
			}
			else
			{
			
			t=s;
			printf("Display    \n  ");
			while(t!=NULL)
			{printf("   %d",t->info);
			t=t->nxt;
			}
			}
			break;
			
		case 3:
		//	printf("delete");
			f=s;
			y=s->nxt;
			//f=f->nxt;
			//z=f;
			while(y!=NULL)
			{y=y->nxt;
			f=f->nxt;
			}
			f->nxt=NULL;
			printf("Deleted Element is  %d",y->info);
			free(y);
		
			break;
				
			
			
		}
		
		
		
		
	}while(!0);
	
	
	
	
	
return 0;
}
