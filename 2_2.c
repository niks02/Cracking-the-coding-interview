#include<stdio.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp;

void main()
{
    int n,key;
    scanf("%d",&n);
    create_nodes(n);
    scanf("%d",&key);
    n_last_element(key);
}

void create_nodes(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        struct node *new=(struct node*)malloc(sizeof(struct node));
        new->next=NULL;
        scanf("%d",&new->data);
        if(head==NULL)
        {
            head=new;
            temp=head;
        }
        else
        {
            temp->next=new;
            temp=temp->next;
        }
    }
}

n_last_element(int key)
{
   int i;
   struct node *p1=head,*p2=head;
   for(i=0;i<key-1;i++)
   {
       if(!p2)
       {
           return 0;
       }
       p2=p2->next;
   }
   while(p2->next)
   {
       p2=p2->next;
       p1=p1->next;
   }
   printf("%d",p1->data);
}
