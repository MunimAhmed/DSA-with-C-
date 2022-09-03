#include<iostream>

using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){

        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }

        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1)
        {
            cout<<"No element to pop"<<endl;
            return;
        }

        top--;
    }

    int Top(){
        if(top==-1)
        {
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];

    }

    bool empty()
    {
        return top==-1;
    }
};



int main()
{
stack m;
m.push(1);
m.push(2);
m.push(3);
m.push(4);
m.push(5);
cout<<m.Top()<<endl;
m.pop();
cout<<m.Top()<<endl;
m.pop();
m.pop();
m.pop();
m.pop();
m.pop();
cout<<m.empty()<<endl;
return 0;
}
