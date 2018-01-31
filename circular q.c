#include<stdio.h>
#define max 7

int ins(int [],int,int,int);
int del(int [],int,int);
void dis(int [],int,int);

void main()

{ int ch,x,f=-1,r=-1,q[max];
	do{
		printf("\n\nEnter the 1 2    3     4 \n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("enter the xxx          ");
				scanf("%d",&x);
				r=ins(q,r,f,x);
				if(f==r-1)      //if(f==-1)
				{f=0;
				}
				break;

			case 2:
				f=del(q,r,f);
				if(f==-1)
				{r=-1;
				}
				break;

			case 3:
				dis(q,r,f);
				break;


		}

	}while(ch!=4);


}

int ins(int q[],int r,int f,int x)
{
	if((f==0 && r==max-1||f==r+1))
	{printf("fullllllllllllll");
	}

	else if(f>0&&r==max-1)
	{
		r=0;
		q[r]=x;
	}

	else
	{r=r+1;
	q[r]=x;
	}
	return (r);
}

int del(int q[],int r,int f)
{ int X;
	if(f==-1&&r==-1)
	{printf("empy");
	}

	else if(f==r)
	{X=q[f];
	printf("deleteddddd===%d",X);
	f=-1;
	}

	else
	{
		X=q[f];
		printf("deleteddddd===%d",X);
		if(f==max-1)
		f=0;

	  else
	  {f=f+1;
	  }
	}
	return (f);
}

void dis (int q[],int r,int f)
{ int i;
	if(f<r)
	{	for(i=f;i<r;i++)
		{
		printf("   %d",q[i]);
		}


	}
	else
	{for(i=f;i<max;i++)
	printf("     %d",q[i]);
	}
	for(i=0;i<=r;i++)
	{printf("   %d",q[i]);
	}
}
