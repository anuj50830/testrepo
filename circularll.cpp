#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head;

void create(int a[],int n)
{
    int i;
    struct node *t,*last;
    head=new node;
    head->data=a[0];
    head->next=head;
    last=head;
    for(i=1;i<n;i++)
    {

        t=new node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct node *h)
{
    do
    {

        cout<<h->data<<" ";
        h=h->next;
    }while(h!=head);
    cout<<"\n";
}

int main()
{

    int A[]={2,4,6,8,10};
    create(A,5);
    display(head);
}
