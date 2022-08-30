#include<bits/stdc++.h>

using namespace std;

int binarysearch(int n, int a[], int key)
{
    int start =0 ;
    int end = n ;
    string b= "Not Found";
    while(start<=end)
    {
        int mid = (start+end)/2;

        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

    }
    return -1;

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

    int key;
    cin>>key;

    cout<<binarysearch(n,a, key);

    return 0;

}