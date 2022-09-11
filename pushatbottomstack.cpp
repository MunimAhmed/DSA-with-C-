    #include<bits/stdc++.h>
    
    using namespace std;
    
    void solve(stack <int> &st, int x)
    {
        //base case
        if(st.empty())
        {
            st.push(x);
            return;
        }

        int  num = st.top();
        st.pop();

        solve(st, x);

        st.push(num);
    }

    int main()
    {
        stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);
        st.push(6);
        st.push(7);
        
        solve(st, 0);
        while(!st.empty())
            {
                cout<<st.top()<<endl;
                st.pop();
            }cout<<endl;

    
    return 0;
    }