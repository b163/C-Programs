#include<stdio.h>
#include<malloc.h>

struct node
{int info;
struct node *nxt;
};
typedef struct node nd;

int main()
{
	int x;
	char ch;
	nd *p,*s;
	s=NULL;
	p=NULL;
	
	do{
	

		p=(nd *)malloc(sizeof(nd));
		
		if(p==NULL)
		{printf("ghguihfjghoy");
		}
		else
		{
			printf("Enter x  ");
			scanf("%d",&p->info);
			
		//	p->info=x;
			p->nxt=NULL;
			
		}
		
		if(s==NULL)
		{s=p;
		}
		else
		{p->nxt=s;
		s=p;
		}
				printf("Do you want to cont..   y/n\n");
		scanf("%s",&ch);
		}while(ch=='y');
	
	///display
printf("DISPLAY          ");	
	while(s!=NULL)
	{printf("    %d",s->info);
	s=s->nxt;
	}
	
	
return 0;}
