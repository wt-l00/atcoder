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
    map<int, int> x;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        x[a[i]]++;
    }
    ll ans = 0;
    for (auto tmp : x) {
        ll k = tmp.second;
        ans += k * (k-1) / 2;
    }
    //cout << ans << endl;
    for (int i = 0; i < n; i++) {
        //cout << x[a[i]] << endl;
        cout << ans - x[a[i]] + 1 << endl;
    }
    return 0;
}

