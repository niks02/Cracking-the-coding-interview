#include<stdio.h>

struct node{
int data;
struct node *next;
}*head=NULL,*temp;

void main()
{
    int n;
    scanf("%d",&n);
    create_nodes(n);
    remove_duplicates();
    print_nodes();
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

void print_nodes()
{
    struct node *temp=head;
    while(temp)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("Null");
}

void remove_duplicates()
{
    struct node*p,*s;
    s=head;
    while(s)
    {
        p=s;
        while(p->next)
        {
            if(s->data==p->next->data)
            {
                temp=p->next;
                p->next=p->next->next;
                free(temp);
            }
            else
            {
                p=p->next;
            }
        }
        s=s->next;
    }
}
