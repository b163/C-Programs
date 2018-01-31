#include<stdio.h>
#include<malloc.h>

struct node
{int info;
struct node *nxt;
};
typedef struct node nd;

int main()
{
	int x,ch;
	char c;
	nd *p,*s,*f;
	s=NULL;
	p=NULL;
	f=NULL;
	
	do{
			printf("Enter your chioce\n1...add\n2...display\n3...delete\n");
			scanf("%d",&ch);
			
			switch(ch)
			
			{	case 1:
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
				
				case 2:
								printf("DISPLAY          ");	
								while(s!=NULL)
								{printf("    %d",s->info);
								s=s->nxt;
								}
				
				case 3:
								f=s;
								s=s->nxt;
								printf("Deleted Element is  %d",f->info);
								free(f);
			}

		
				printf("Do you want to cont..   y/n\n");
		scanf("%s",&c);
		}while(ch=='y');
	
	///display
	
	
return 0;
}
