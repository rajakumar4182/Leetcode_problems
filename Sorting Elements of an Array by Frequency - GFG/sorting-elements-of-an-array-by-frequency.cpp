#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> &p1,pair<int,int> &p2){
    if(p1.second==p2.second)
        return p1.first<p2.first;
        
    return p1.second > p2.second;
}

void solve(vector<int>v,int n){
    map<int,int> m;
    for(auto it: v)
        m[it]++;
    
    int len = m.size();
    
    pair<int,int> p[len];
    
    int i =0;
    for(auto it=m.begin();it!=m.end();it++){
        p[i++] = make_pair(it->first,it->second);
    }
    
    sort(p,p+len,compare);
    
    for(auto it:p){
        while(it.second--){
            cout<<it.first<<" ";
        }
    }
    cout<<endl;
    
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a;
	    for(int i=0;i<n;i++){
	        int elem;
	        cin>>elem;
	        a.push_back(elem);
	    }
	    solve(a,n);
	}
	return 0;
}