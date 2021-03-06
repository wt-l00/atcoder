#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    double N, K;
    double sum = 0, ans;
    double y = 0;
    cin >> N >> K;

    for (double i = 1; i <= N; i++) {
        double x = i;
        y = 1.0;
        while (x < K) {
            x *= 2.0;
            y *= 1.0/2.0;
        }
        ans += 1.0/N*y;
    }
    cout << setprecision(12) << ans << endl;
    return 0;
}
