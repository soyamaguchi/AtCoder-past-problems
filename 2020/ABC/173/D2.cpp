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

using namespace std;

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
#define srtd(a) sort(all(a),greater<ll>())
#define rvs(s) reverse(all(s))
#define psb push_back
#define ppb pop_back
#define isu isupper
#define isl islower
#define lb(a,k) lower_bound(all(a),k)
#define ub(a,k) upper_bound(all(a),k)
#define bs(a,k) binary_search(all(a),k)

const int I_INF = 1001001001;
const ll LL_INF = 1001001001001001001;
const ld EPS = 0.001;



int main() {
    ll N;
    cin >> N;
    vl a(N);
    rep (i, N) cin >> a[i];

    srtd(a);
    ll ans = 0, cnt = 0, cur = 0;
    rep (i, N-1) {
        if (i == 0) {
            ans += a[i];
        } else {
            cnt++;
            if (cnt == 2) {
                ans += a[cur];
                cnt = 0, cur++;
            } else {
                cur = cur == 0 ? i : cur;
                ans += a[cur];
            }
        }
    }

    cout << ans << endl;
}
