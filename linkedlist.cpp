<<<<<<< HEAD
#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
};

void insertionhead(node* &head, int data)
{
    node* a= new node();
    a->val=data;
    a->next=head;
    head= a;
}

void insertiontail(node* &head, int data)
{
    node* temp=head;
    node* b= new node();
    b->val=data;
    b->next=NULL;
    if(head==NULL)
    {
        head=b;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=b;

}

void insertionindex(node* &head, int index, int data)
{
    node* a= new node();
    a->val=data;
    if(index==0)
    {
    a->next=head;
    head= a;
    return;
    }
    else{
    node* temp=head;
    for(int i=0; i<index-1; i++)
    {
        temp=temp->next;
    }
    node* temp2=temp->next;
    temp->next=a;
    a->next=temp2;
    }

}

node* reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;

    }
    return prevptr;
}

node* reversek(node* &head, int k)
{
    node *prevptr=NULL;
    node *currptr=head;
    node *nextptr;

    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }

    if(nextptr!= NULL)
    {
    head->next=reversek(nextptr, k);
    }

    return prevptr;

}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

int main(){
    node* head=NULL;
    insertionhead(head, 1);
    insertionhead(head, 2);
    insertionhead(head, 3);
    insertiontail(head, 10);
    insertionindex(head, 1, 5);
    display(head);
    int k=2;
    node* newhead= reversek(head, k);
    //node* newhead= reverse(head);
    display(newhead);

    return 0;
}
=======
#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
};

void insertionhead(node* &head, int data)
{
    node* a= new node();
    a->val=data;
    a->next=head;
    head= a;
}

void insertiontail(node* &head, int data)
{
    node* temp=head;
    node* b= new node();
    b->val=data;
    b->next=NULL;
    if(head==NULL)
    {
        head=b;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=b;

}

void insertionindex(node* &head, int index, int data)
{
    node* a= new node();
    a->val=data;
    if(index==0)
    {
    a->next=head;
    head= a;
    return;
    }
    else{
    node* temp=head;
    for(int i=0; i<index-1; i++)
    {
        temp=temp->next;
    }
    node* temp2=temp->next;
    temp->next=a;
    a->next=temp2;
    }

}

node* reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;

    }
    return prevptr;
}

node* reversek(node* &head, int k)
{
    node *prevptr=NULL;
    node *currptr=head;
    node *nextptr;

    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }

    if(nextptr!= NULL)
    {
    head->next=reversek(nextptr, k);
    }

    return prevptr;

}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

int main(){
    node* head=NULL;
    insertionhead(head, 1);
    insertionhead(head, 2);
    insertionhead(head, 3);
    insertiontail(head, 10);
    insertionindex(head, 1, 5);
    display(head);
    int k=2;
    node* newhead= reversek(head, k);
    //node* newhead= reverse(head);
    display(newhead);

    return 0;
}
>>>>>>> 74d7bcd189684a1f4b05f24b6c5bade999889c6a
