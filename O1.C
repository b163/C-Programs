#include <stdio.h>

int main()
{ int i;
   // printf("Enter no\n");
    //scanf("%d",&n);
    
    for(i=1;i<=15;i++)
    {
        
       // if(i>=3 || i>=5)
        ///{
        if(i>=3 && i%3==0)
        printf("Fizz\n");
        
        if(i>=5 && i%5==0)
        printf("Buzz\n");
        
        if(i%3==0 && i%5==0)
        printf("FizzBuzz\n");
        //}
        //else
        {printf("  %d\n",i);
        }
        
        
        
    }
    return 0;
}
