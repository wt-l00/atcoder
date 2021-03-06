#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

const ll MOD = 1e9 + 7;
const ll inf = 1LL<<60;
const int int_inf = 100000000;
const double eps = 1e-9;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
 
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector <ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<ll> x(n, 0), y(n, 0);
    for (int i = 1; i <= n; i++) {
        if (i + a[i-1] < n) x[i + a[i-1]]++;
        if (i - a[i-1] >= 0) y[i - a[i-1]]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += x[i] * y[i];
    }

    cout << ans << endl;
    return 0;
}

