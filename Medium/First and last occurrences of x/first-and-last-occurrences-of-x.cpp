//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstOcc(int arr[],int low,int high,int x);
int lastOcc(int arr[],int low,int high,int x);
vector<int> find(int arr[], int n , int x)
{
    // code here
    int low=0;
    int high=n-1;
    int first,last;
    first=firstOcc(arr,low,high,x);
    
    if(first==-1) return {-1,-1};
    else
    {
        last=lastOcc(arr,low,high,x);
    }
    
    return {first,last};
    
}

int firstOcc(int arr[],int low,int high,int x)
{
    int first=-1;   
    while(low<=high)
    {
        int mid=(low+high)/2;
    
        if(arr[mid]==x)
        {
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return first;
}

int lastOcc(int arr[],int low,int high,int x)
{
    int last=-1;   
    while(low<=high)
    {
        int mid=(low+high)/2;
    
        if(arr[mid]==x)
        {
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return last;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends