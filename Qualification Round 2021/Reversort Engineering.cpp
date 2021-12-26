#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int U = 1; U <= T; U++) {
        cout << "Case #" << U << ": ";
        int n, c;
        cin >> n >> c;
        if (c < n - 1 || c > n * (n + 1) / 2 - 1) cout << "IMPOSSIBLE\n";
        else {
            c -= n - 1;
            int a[102] = {}, b[102] = {};
            for (int i = 1; i <= n; i++) a[i] = i;
            for (int i = 1; i < n; i++) {
                if (c >= n - i) {
                    c -= n - i;
                    reverse(a + i, a + n + 1);
                }
            }
            for (int i = 1; i <= n; i++) b[a[i]] = i;
            for (int i = 1; i <= n; i++) cout << b[i] << " \n"[i == n];
        }
    }
}
