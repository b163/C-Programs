/************************ Deleting node from a specific position **************************/

#include<stdio.h>
#include<malloc.h>

typedef struct node 
{int info;
struct node *nxt;
}nd;

int main()
{
	int c,x,k,i;
	nd *s,*p,*f,*t,*fs;
	s=NULL;
	p=NULL;
	fs=f=NULL;
	t=NULL;
	
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
		printf("Enter the element deleting position");
		scanf("%d",&k);
		if(k==1)
		{	f=s;
			s=s->nxt;
			printf("Deleted Element is  %d",f->info);
			free(f);
		}
		else
		{
				fs=s;
			f=s->nxt;
			for(i=1;i<(k-1);i++)
			{
				fs=fs->nxt;
				f=f->nxt;
			}
			fs->nxt=f->nxt;
			printf("Deleted Element is  %d",f->info);
			free(f);
			
		}
			break;		
				
			
			
		}
		
		
		
		
	}while(!0);
	
	
	
	
	
return 0;
}
