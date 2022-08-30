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

    return 0;
}
