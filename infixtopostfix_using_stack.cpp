#include<iostream>
#include<stack>
#include<string>

using namespace std;

int isOperator(char ch)
{
    if(ch=='+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '(' || ch == ')')
        return 1;
    else
        return 0;
}

int precedence(char ch)
{
    //for limited input only
    if(ch == '^')
        return 4;
    else if(ch == '*' || ch == '/')
        return 3;
    else if(ch=='+' || ch == '-' )
        return 2;
    else
        return 0;
}

string infixtopostfix(string infix)
{
    stack <char> st;
    int i=0;
    string postfix;
    while(infix[i]!='\0')
    {
        if(!isOperator(infix[i]))
        {
           postfix+=infix[i];
            i++;
        }

        else{
            if(infix[i]== '(')
            {
               st.push(infix[i]);
               i++;
            }
            else if(infix[i]== ')')
            {
                while(!st.empty() && st.top()!='(')
                {
                    postfix+=st.top();
                    st.pop();
                }
                if(!st.empty())
                {
                    st.pop();
                }
                i++;
            }
            else if(st.empty() || precedence(infix[i])>precedence(st.top()))
            {
                st.push(infix[i]);
                i++;
            }
            else{
                postfix+=st.top();
                st.pop();
            }
        }
    }

    while(!st.empty())
    {
        postfix+=st.top();
        st.pop();
    }

    return postfix;
}


int main()
{
string infix= "(a+b)/c-d*g";
cout<<"Infix-->"<<infix<<endl;
cout<<"Postfix-->"<<infixtopostfix(infix)<<endl;
return 0;
}
