//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> res;
        res.push_back(-1);
        long long int i=0,j=1;
        long long int sum = arr[0];
        
        if(s==0){
            for(int k=0;k<n;k++){
                if(arr[k]==s){
                    res.pop_back();
                    res.push_back(k+1);
                    res.push_back(k+1);
                }
            }
            return res;
        }
        else{
        
            while(i<=n&&j<=n){
                if(sum < s){
                    sum+=arr[j];
                    
                    j++;
                }
                if(sum > s){
                   sum= sum-arr[i];
                    i++;
                }
                if(sum==s){
                    res.pop_back();
                    res.push_back(i+1);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
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
        int arr[n];
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