#include<stdio.h>
//#include<conio.h>
#include<malloc.h>

 typedef struct node
{
    int info;
    struct node *nxt;
}nd;

//nd* add(nd *);
//void dis(nd *);






nd* add(nd *start)
{	int x;
    nd *p;

   p=NULL;
   p=(nd*)malloc(sizeof(nd));
   if(p!=NULL)
   {printf("Enter X  ");
   scanf("%d",&x);
   p->info=x;
       
   }
   
   
   if(start==NULL)
   {
   start=p;
   //start->nxt=p->nxt;
}
   else
   { p->nxt=start;
     //start->nxt=p;
     start=p;
   }	
   return (start);
    
}

void dis(nd *start)
{ //nd *t=NULL;
//t=start;
while(start->nxt!=NULL)
	{printf("  %d",start->info);

	start=start->nxt;
}
	
}

int main()
{	int n;
 	nd *start=NULL;
	
	do{
		printf("Do you want to continue  y-1/n-2");
		scanf("%d",&n);
		
		switch(n)
		{
			case 1:
			{start=add(start);
			break;
			}
			case 2:
				{dis(start);
				break;
				}  		
		}
	}while(n!=3);
//	getch();
	
	return 0;
}




