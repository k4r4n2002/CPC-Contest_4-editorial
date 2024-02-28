#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int x; cin>>x;
	    int msb= __builtin_clz(x);// gives us number of leading zeroes
	    msb=32-msb;// what we have now is Most significant bit
	    msb--;
	    int a= 1<<msb, b=0;// set most significant bit in 'a' which makes it bigger than b in all cases
	    msb--;
	    for(int i=msb; i>=0;i--){
	        if(x&(1<<i)) b|=(1<<i);// set the remaining bits in 'b' 
	    }
	    cout<<b<<" "<<a<<endl;
	}

}
