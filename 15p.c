#include<stdio.h>
#include<malloc.h>

struct node
{
	int info;
	struct node *nxt;
};
typedef struct node nd;



nd* add(nd *p,nd *t,nd *r)
{	nd *ts;
	ts=NULL;

while(r!=NULL && (p->info >= t->info))
									{
										ts=t;
										t=t->nxt;
									}
									
									p->nxt=t;
									ts->nxt=p;
return (t);									
}


void dis(nd *l,nd *r)
{

printf("Display");
		while(r!=NULL)
		{printf("%d  ",l->info);
		l=l->nxt;
		}
}


int main()
{
	nd *p,*t,*l,*r;
	int x,ch,n;
	//char ch[10];
	p=NULL;
//	s=NULL;
	t=NULL;
	
	l=NULL;
	r=NULL;
	
		
	do
	{	printf("\n1..insert\n2..Display\n3..Exit\t\t\t");
		scanf("%d",&n);
		
		switch(n)
{

		case 1://add
	
							{
									p=(nd *)malloc(sizeof(nd));
								
								if(p==NULL)
								{printf("Memory cannot be allocated");
								}
								else
								{printf("\nEnter x    ");
								 scanf("%d",&x);
								 p->info=x;
								 p->nxt=NULL;
								}
							
							if(l==NULL && r==NULL)
							{//s=p;
							l=p;
							r=p;
							}
							else
							{
								//p->nxt=s;
								//s=p;
								if(p->info < l->info)
								{p->nxt=l;
								 l=p;
								}
								else if(p->info > r->info)
								{r->nxt=p;
								 r=p;
								}
								else
								{	t=l;
								t=add(p,t,r);
									
								}
							}
							break;
						}
								
								
		case 2:
					{
						dis(l,r);
						
					}break;
					
	}
					
	}while(n);
	


return (0);	
}



	
										
		

