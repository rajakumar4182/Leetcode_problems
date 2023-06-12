//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	   // int ans = 0;
	   // for(int i =1;i<N;i++){
	   //     if(A[i-1] != A[i] && A[i] != A[i+1]){
	   //         ans= A[i];
	   //         break;
	   //     }
	   // }
	   // return ans;
	   int sumT=0,Sum=0;
	   for(int i =0;i<N;i++){
	       sumT += A[i];
	   }
	   for(int i =0;i<N;i+=2){
	       Sum += A[i] *2;
	   }
	   
	   return (Sum - sumT);
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends