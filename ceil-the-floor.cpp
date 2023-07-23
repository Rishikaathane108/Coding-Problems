//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int i,f=-1;
    int c=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=x && arr[i]>=f)
        {
            f=arr[i];
        }
        
        if(arr[i]>=x && (c == -1 || arr[i] <= c))
        {
            c=arr[i];
        }
    }
    
    return make_pair(f,c);
}