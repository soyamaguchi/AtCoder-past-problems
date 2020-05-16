#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rep1(i,n) for(int i=1; i<=(int)(n); i++)
#define all(c) c.begin(),c.end()
#define psb push_back
#define ppb pop_back

const int INF = 1000000000;

int main() {
    int s = 4;
    char in[s];
    int t = 7;

    cin >> in[0] >> in[1] >> in[2] >> in[3];
    rep (i, s) in[i] = in[i]-'0';

    int ans;
    rep (i, 1 << s) {
        int c = in[0];
        string f = to_string(c);
        rep (j, s-1) {
            if ((i >> j) & 1) {
                c += in[j+1];
                f += "+";
                f += to_string(in[j+1]);
            } else {
                c -= in[j+1];
                f += "-";
                f += to_string(in[j+1]);
            }
        }
        if (t == c) {
            f += "=7";
            cout << f << endl;
            break;
        }
    }
}
