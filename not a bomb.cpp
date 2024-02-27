#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, x, ans=0; cin>>n>>x;
	    
	    for(int i=0 ; i<n ; i++){
	        int num; cin>>num;
	        if(num<x) ans=i+1;
	    }
	    cout<<ans<<endl;
	}

}
