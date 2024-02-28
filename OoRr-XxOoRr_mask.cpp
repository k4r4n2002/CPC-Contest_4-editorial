#include <bits/stdc++.h>
using namespace std;
int main() {
	int n ;
    cin>>n;
	int a[n];
	for (auto &i : a) cin>>i;
	
	int res = 2e9;
	for (int mask = 0; mask < 1 << (n - 1); mask++) {
		int curXor = 0;
		int curOr = 0;
		for (int j = 0; j <= n; j++) {
			if (j < n) curOr |= a[j];
			if (j == n || (mask >> j & 1)) curXor ^= curOr, curOr = 0;
		}
		res = min(res, curXor);
	}
	
	cout<<res;
	return 0;
}
