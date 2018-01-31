#include<stdio.h>

typedef struct node
{
    int info;
    struct node *nxt;
}nd;

nd* push(nd *top);
nd* pop(nd *top);
nd* dis(nd *top);

void main()
{ int c;
    nd *top=NULL;

    do{
        printf("\n\n 1.....2....3......4...\n");
        scanf("%d",&c);

        switch(c)
        {
            case 1:
            top=push(top);
            break;

            case 2:
            top=pop(top);
            break;

            case 3:
            if(top==NULL)
            {
                printf("empty");
            }
            else
            dis(top);
            break;
        }
    }while(c!=4);

}

nd* push(nd *top)
{ int x;
    nd *p=NULL;
    p=(nd*)malloc(sizeof(nd));

    if(p==NULL)
    {
        printf("mem not allocated");
    }
    else
    {printf("Enter x");
    scanf("%d",&x);
        p->info=x;
        p->nxt=top;
        top=p;
    }
    return (p);
}

nd* pop(nd *top)
{
    if(top==NULL)
            {
                printf("empty");
            }
    else
            { nd *t=top;
                printf("Element poped is ==%d",top->info);
                top=top->nxt;
                free(t);
            }

        return (top);
}

nd* dis(nd *top)
{
    while(top!=NULL)
    {
        printf("elements are %d",top->info);
        top=top->nxt;
    }
}
