#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin >> a[i];

    auto solve = [&] (auto &self, int i, int curOr, int curXor) -> int {
        if (i == n)
            return curXor ^ curOr;
        return min(self(self, i + 1, curOr | a[i], curXor), self(self, i + 1, a[i], curXor ^ curOr));// old subarray or start a new one
    };

    cout << solve(solve, 0, 0, 0) << "\n";

    return 0;
}
