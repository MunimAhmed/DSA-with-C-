    #include<bits/stdc++.h>
    
    using namespace std;
    
    void removemid(stack <int> &st, int count, int size)
    {
        //base case
        if(count == size/2)
        {
            st.pop();
            return;
        }

        int  num = st.top();
        st.pop();

        removemid(st, count+1, size);

        st.push(num);
    }

    int main()
    {
        int count = 0; 
        stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);
        st.push(6);
        st.push(7);
        int size = st.size();
        removemid(st, count, size);
        while(!st.empty())
            {
                cout<<st.top()<<endl;
                st.pop();
            }cout<<endl;

    
    return 0;
    }