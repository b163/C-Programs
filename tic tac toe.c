#include<stdio.h>

char play='x';
char a[3][3]={'1','2','3','4','5','6','7','8','9'};

void draw()
{ int i,j;
//int a[3][3]={4,2,3,4,5,6,7,8,9};

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("  %c",a[i][j]);
	    printf("\n");
	}

}

void input()
{int b;

printf("Enter b");
scanf("%d",&b);

if(b==1)
a[0][0]=play;
else if(b==2)
a[0][1]=play;
else if(b==3)
a[0][2]=play;

else if(b==4)
a[1][0]=play;
else if(b==5)
a[1][1]=play;
else if(b==6)
a[1][2]=play;


else if(b==7)
a[2][0]=play;
else if(b==8)
a[2][1]=play;
else if(b==9)
a[2][2]=play;


}

//changing player
void player()
{
	if(play=='x')
	{play='o';
	}
	else
	{play='x';
	}

}

int win()
{ char x,o;
printf("yygu");
	if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x')
	return 1;
	if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x')
	return 'x';
	if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x')
	return 1;

	if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x')
	return 1;
	if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x')
	return 1;
	if(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x')
	return 1;

	if(a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x')
	return 1;
	if(a[2][0]=='x' && a[1][1]=='x' && a[0][2]=='x')
	return 1;


	//2 player

	if(a[0][0]=='o' && a[0][1]=='o' && a[0][2]=='o')
	return 0;
	if(a[1][0]=='o' && a[1][1]=='o' && a[1][2]=='o')
	return 0;
	if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o')
	return 0;

	if(a[0][0]=='o' && a[1][0]=='o' && a[2][0]=='o')
	return 0;
	if(a[0][1]=='o' && a[1][1]=='o' && a[2][1]=='o')
	return 0;
	if(a[0][2]=='o' && a[1][2]=='o' && a[2][2]=='o')
	return 0;

	if(a[0][0]=='o' && a[1][1]=='o' && a[2][2]=='o')
	return 0;
	if(a[2][0]=='o' && a[1][1]=='o' && a[0][2]=='o')
	return 0;

return 2;
}


int main()
{ char x,o,y;

	draw();
	while(!0)
	{
		input();
		draw();
		//win();
		//{
		y=win();
		printf("%c",y);
							if(y==1)
					{
						printf("XXXXX wins");
						break;
					}
					if(y==0)
					{printf("ooooo wins");
					break;
					}
					if(win()==2)
					{ printf("Match Draw");
					break;
					}
		}
		player();


	return 0;

}
