
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m, k; cin>>n>>m>>k;
        pair<ll, ll> p[100010];
        for(int i=0; i<n ;i++) cin>>p[i].first;
        for(int i=0; i<n ;i++) cin>>p[i].second;

        vector<int> sub[m+2]; // to store time to cover topics of every subject
        for(int i=0; i<n ;i++){
            sub[p[i].first].push_back(p[i].second);// sub[topic].pb(time);
        }
        for(int i=0; i<m+1 ;i++) sort(begin(sub[i]), end(sub[i])); // for every subject, sort them timewise
        vector<int> v;
        for(int i=0; i<m+1 ;i++){
            if(sub[i].size()){
                v.push_back(sub[i][0]); // first element
                ll j=2;
                while(j< sub[i].size()){
                    v.push_back(sub[i][j]+sub[i][j-1]);// 2 elements at once
                    j+=2;
                }
            }
        }
        sort(v.begin(), v.end());// sort the vector
        ll i=0;
        while(i<v.size()){
            if(v[i]>k) break;
            k-=v[i++];
        }
        
        cout<<i<<endl;
        
    }
    
}
