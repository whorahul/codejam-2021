#include <bits/stdc++.h>

using namespace std;
const int MAXN = 100;
int a[MAXN];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int cnt = 1;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int j = (int) distance(a, min_element(a + i, a + n));
            ans += j - i + 1;
            reverse(a + i, a + j + 1);
        }
        printf("Case #%d: %d\n", cnt++, ans);
    }
    return 0;
}
