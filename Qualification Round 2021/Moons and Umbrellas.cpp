#include <bits/stdc++.h>

using namespace std;

const int INF = 1E9;
const int MAXN = 1000;
int dp[MAXN][2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int T = 1; T <= t; T++)
    {
        int x, y;
        string s;
        cin >> x >> y >> s;
        int n = (int) s.length();
        for (int i = 0; i < n; i++)
            dp[i][0] = dp[i][1] = INF;
        dp[0][0] = dp[0][1] = 0;
        if (s[0] == 'C')
            dp[0][1] = INF;
        else if (s[0] == 'J')
            dp[0][0] = INF;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'C' || s[i] == '?')
                dp[i][0] = min(dp[i - 1][0], dp[i - 1][1] + y);
            if (s[i] == 'J' || s[i] == '?')
                dp[i][1] = min(dp[i - 1][0] + x, dp[i - 1][1]);
        }
        printf("Case #%d: %d\n", T, min(dp[n - 1][0], dp[n - 1][1]));
    }
    return 0;
}
