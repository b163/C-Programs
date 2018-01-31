#include<stdio.h>
#include<malloc.h>

typedef struct node
{
	char info;
	struct node *next;
	
}nd;

void main()
{
	nd *s,n1,n2,n3;
	s=NULL;
	s=(nd*)malloc(sizeof(nd));
	if(s!=NULL)
	{s=&n1;
	 n1.next=&n2;
	 n2.next=&n3;
	 n3.next=NULL;
	
	n1.info='a';
	n2.info='b';
	n3.info='c';
	
	}
	
	while(s!=NULL)
	{printf("  %c",s->info);
	s=s->next;
}
	
	
	
	
}


