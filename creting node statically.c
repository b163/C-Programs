#include<stdio.h>

typedef struct node
{int info;
struct node *nxt;
}nd;

void main()
{ int x,y,z;
	nd a,b,c,*start,*t;


printf("Enter the x ,y and z");
scanf(" %d %d %d",&x,&y,&z);
	a.info=x;
	b.info=y;
	c.info=z;

	c.nxt=NULL;
	b.nxt=&c;
	a.nxt=&b;
	start=&a;

	//Display

	t=start;
	while(t!=NULL)
	{printf("%d",t->info);
	t=t->nxt;
	}





}
