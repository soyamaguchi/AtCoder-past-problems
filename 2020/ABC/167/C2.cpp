#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i=0; i<(int)(n); i++)

const int INF = 1000000000;

int main(){
    int n, m, x;
    cin >> n >> m >> x;

    vector< vector<int> > a(n, vector<int>(m));
    vector<int> c(n);

    rep (i, n) {
        cin >> c[i];
        rep (j, m) {
            cin >> a[i][j];
        }
    }

    int ans = INF;
    rep (i, 1 << n) {
        int cost = 0;
        vector<int> d(m);
        rep (j, n) {
            if ((i >> j) & 1) {
                cost += c[j];
                rep (k, m) {
                    d[k] += a[j][k];
                }
            }
        }

        bool ok = true;
        rep (j, m) {
            if (d[j] < x) {
                ok = false;
            }
        }
        if (ok) {
            ans = min(ans, cost);
        }
    }

    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
