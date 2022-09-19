#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->prev=NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data "<< value <<endl;
    }

};

int getLength(Node* head)
{
    int len = 0;
    Node* temp= head;

    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertionhead(Node* &head, int data)
{
    Node* temp= new Node(data);
    temp->next=head;
    head->prev=temp;
    head= temp;

}

void insertiontail(Node* &tail, int data)
{
    Node* temp = new Node(data);
    tail -> next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertionindex(Node* &head, int index, int data)
{
    Node* nodetoInsert= new Node(data);
    if(index==0)
    {
    nodetoInsert->next=head;
    head->prev= nodetoInsert;
    head= nodetoInsert;
    return;
    }
    else{
    Node* temp=head;
    for(int i=0; i<index-1; i++)
    {
        temp=temp->next;
    }
    nodetoInsert->next=temp->next;
    temp->next->prev=nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;
    }

}

void deletenode(Node* &head, int position)
{
    //deleting first or start node
    if(position == 1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head = head->next;
        //memory free for start node
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;

        int count= 1;
        while(count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next= curr->next;
        curr->next= NULL;
        delete curr;
    }
}


void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}


int main()
{
    Node* node1 = new Node(100);

    Node* head=node1;
    Node* tail=node1;
    insertionhead(head, 1);
    insertionhead(head, 2);
    insertionhead(head, 3);
    insertiontail(tail, 10);
    insertionindex(head, 3, 11);
    deletenode(head, 4);
    display(head);
    cout<<getLength(head)<<endl;

    return 0;
}
