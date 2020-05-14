#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rep1(i,n) for(int i=1; i<=(int)(n); i++)
#define all(c) c.begin(),c.end()

const int INF = 1000000000;

int main(){
    int N, Y;
    cin >> N >> Y;

    int r = 0;
    rep (x, N+1) {
        rep (y, N+1-x) {
            int z = N - x - y;
            int sum = x*10000 + y*5000 + z*1000;
            if (Y == sum) {
                cout << x << ' ' << y << ' ' << z << endl;
                r = 1;
                break;
            }
        }
        if (r) break;
    }

    if (!r) cout << -1 << ' ' << -1 << ' ' << -1 << endl;
}
