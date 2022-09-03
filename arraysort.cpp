#include <bits/stdc++.h>
using namespace std;


int selectionsort(int n, int a[])
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int bubblesort(int n, int a[])
{
    int count=0;
    while(count<n)
    {
        for(int i=0; i<n-count; i++)
        {
            if(a[i]>a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        count++;
    }

     for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int insertionsort(int n, int a[])
{
    for(int i=1; i<n; i++)
    {
        int current = a[i];
        int j = i-1;
        
        while(a[j]>current && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }

     for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    insertionsort(n, a);
}
