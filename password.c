#include<stdio.h>

int main()

{   int p,k,c=0;
    printf("enter the no of digit of passward");
    scanf("%d",&p);
    printf("%d",p);

   /* for(i=0;i<10;i++)
        {
          */  for(p=p;p>0;p--)
            {      printf("\v");

                for(k=0;k<10;k++)
               {
                printf("  %d \n",k);
                c++;
               }
            }         printf("Total possible Password= %d",c);

return(0);
}
