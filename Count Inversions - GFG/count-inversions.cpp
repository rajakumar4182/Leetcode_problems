//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long ans = 0;
    
    void merge(long long arr[],long long int s,long long int mid,long long int e){
        int n = mid-s+1;
        int m = e- mid;
        
        long long left[n];
        long long right[m];
        
        for(long long int i=0;i<n;i++){
            left[i] = arr[s+i];
        }
        for(long long int i=0;i<m;i++){
            right[i] = arr[mid+1+i];
        }
        
        long long int k =s,i=0,j=0;
        while(i<n && j<m){
            if(left[i] <= right[j]){
                    arr[k] = left[i];
                    i++;
            }
            else{
                ans += n-i;
                arr[k] = right[j];
                j++;
            }
            k++;
        }
        while(i<n){
            arr[k++] = left[i++];
        }
        while(j<m){
            arr[k++] = right[j++];
        }
    }
    
    void mergeSort(long long arr[],long long int s,long long int e){
        if(s<e){
           long long int mid = (s+e)/2;
            mergeSort(arr,s,mid);
            mergeSort(arr,mid+1,e);
            merge(arr,s,mid,e);
        }
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        mergeSort(arr,0,N-1);
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends