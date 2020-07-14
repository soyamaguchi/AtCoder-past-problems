#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <complex>
#include <unordered_map>
#include <unordered_set>
#include <random>
#include <cassert>
#include <fstream>
#include <utility>
#include <functional>
#include <time.h>
#include <stack>
#include <array>
#include <list>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace std;
using namespace boost::multiprecision;

typedef long long ll;
typedef long double ld;

#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define pii pair<int,int>
#define pis pair<int,string>
#define psi pair<string,int>
#define pll pair<ll,ll>
#define mii map<int,int>
#define mis map<int,string>
#define msi map<string,int>
#define mll map<ll,ll>
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rep1(i,n) for(int i=1; i<=(int)(n); i++)
#define all(c) c.begin(),c.end()
#define srta(a) sort(all(a))
#define srtd(a) sort(all(a),greater<型>())
#define rvs(s) reverse(all(s))
#define psb push_back
#define ppb pop_back
#define isu isupper
#define isl islower
#define lb(a,k) lower_bound(all(a),k)
#define ub(a,k) upper_bound(all(a),k)
#define bs(a,k) binary_search(all(a),k)
#define popcount __builtin_popcount
#define popcountll __builtin_popcountll

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

const int I_INF = 1001001001;
const ll LL_INF = 1001001001001001001;
const ld EPS = 0.001;

ll f(ll x) {
    if (x == 0) return 0;
    return f(x%popcountll(x))+1;
}

int main() {
    ll N;
    string s;
    cin >> N >> s;

    vl a(N);
    ll pc = 0;
    rep (i, N) {
        a[i] = s[i]-'0';
        if (a[i] == 1) pc++;
    }

    vl ans(N);
    rep (b, 2) {
        ll xpc = pc;
        if (b == 0) xpc++; else xpc--;
        if (xpc <= 0) continue;

        ll rem = 0;
        rep (i, N) {
            rem = rem*2%xpc;
            rem += a[i];
        }

        ll m = 1;
        rep (i, N) {
            ll xrem = rem;
            if (b == 1 && a[N-1-i] == 1) {
                xrem = (xrem-m)%xpc;
                xrem = xrem < 0 ? xrem+xpc : xrem;
                ans[N-1-i] = f(xrem)+1;
            } else if (b == 0 && a[N-1-i] == 0) {
                xrem = (xrem+m)%xpc;
                ans[N-1-i] = f(xrem)+1;
            }

            m = m*2%xpc;
        }
    }

    rep (i, N) cout << ans[i] << endl;
}
