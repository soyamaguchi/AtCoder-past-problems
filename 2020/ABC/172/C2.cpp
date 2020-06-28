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
#define srtd(a) sort(all(a),greater<型>())
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
    ll N, M, K;
    cin >> N >> M >> K;

    vl a(N);
    vl b(M);
    rep(i,N) cin >> a[i];
    rep(i,M) cin >> b[i];

    vl sum_a(N+1, 0);
    vl sum_b(M+1, 0);
    rep(i,N) sum_a[i+1] += sum_a[i] + a[i];
    rep(i,M) sum_b[i+1] += sum_b[i] + b[i];

    ll cnt = 0;
    rep (i, N+1) {
        ll rem = K-sum_a[i];
        if (rem < 0) break;

        auto it = ub(sum_b, rem);
        ll cnt_b = it-sum_b.begin()-1;
        cnt = max(cnt, cnt_b+i);
    }

    cout << cnt << endl;
}
