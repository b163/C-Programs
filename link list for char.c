#include<stdio.h>
#include<malloc.h>

typedef struct node
{
	char info[50];
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
	
	gets(n1.info);
	gets(n2.info);
	gets(n3.info);
	
	}
	
	while(s!=NULL)
	{printf("  %s",s->info);
	s=s->next;
	//printf("\npress ENTER");
	//getchar();
}
	
	
	
	
}


