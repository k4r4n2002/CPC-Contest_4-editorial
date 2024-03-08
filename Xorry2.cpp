
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans = 1;
        int cnt = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (x >> i & 1)
            {
                cnt++;
            }
            else
            {
                if (cnt >= 2)
                    ans *= 2;
            }
        }

        cout << ans << "\n";
    }
    
}
