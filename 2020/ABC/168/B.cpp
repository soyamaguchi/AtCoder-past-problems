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
    int K;
    string S;

    cin >> K >> S;

    if (K >= S.size()) {
        cout << S << endl;
    } else {
        string s = "";
        rep (i, K) {
            s += S[i];
        }
        cout << s+"..." << endl;
    }
}
