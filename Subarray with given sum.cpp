//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array that adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int sum=0,i=0,j=0;
        while(i<n && j<=n){
            if(s==0){
                return {-1};
            }
            if(sum<s){
                sum+=arr[j];
                j++;
            }
            if(sum>s){
                sum-=arr[i];
                i++;
            }
            if(sum==s){
                return {i+1,j};
            }
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
