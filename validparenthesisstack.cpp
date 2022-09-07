#include<bits/stdc++.h>

using namespace std;

void isValidParenthesis(string expression)
{
    stack<char> s;
    for(int i=0; i<expression.length(); i++)
    {
        char ch =expression[i];

        //if opening bracket, stack push
        //if closing brack, stacktop check and pop

        if(ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else{
            //for closing bracket
            if(!s.empty())
            {
                char top=s.top();
                if((ch == ')' && s.top() == '(') ||
                (ch == '}' && s.top() == '{') ||
                (ch == ']' && s.top() == '[') )
                {
                    s.pop();
                }
                else{
                    cout<<"Invalid Parenthesis"<<endl;
                }
            }
            else
            {
                cout<<"Invalid Parenthesis"<<endl;
            }
        }
    }
    if (s.empty())
    {
         cout<<"Valid Parenthesis"<<endl;
    }
    else{
         cout<<"Invalid Parenthesis"<<endl;
    }
}
int main()
{
    /*string expression;
    cout<<"Enter parenthesis string"<<endl;
    cin>>expression;*/
    string expression = "[({{{}}})]"; 
    isValidParenthesis(expression);

    return 0;
}
