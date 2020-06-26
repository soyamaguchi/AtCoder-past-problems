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
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rep1(i,n) for(int i=1; i<=(int)(n); i++)
#define all(c) c.begin(),c.end()
#define psb push_back
#define ppb pop_back

const int I_INF = 1001001001;
const ll LL_INF = 1001001001001001001;
const ld EPS = 0.001;

int main() {
    int N, Q;
    cin >> N;

    map<ll,ll> a;
    rep (i, N) {
        ll n = 0;
        cin >> n;
        a[n]++;
    }

    cin >> Q;

    ll sum = 0;
    for (const auto [k,v] : a) sum += k*v;

    vl ans;
    rep (i, Q) {
        ll b, c;
        cin >> b >> c;

        if (!a.count(b)) {
            ans.psb(sum);
            continue;
        }

        ll v = a[b];
        sum -= b*v;
        a.erase(b);
        a[c] += v;
        sum += c*v;

        ans.psb(sum);
    }

    for (const auto n : ans) cout << n << endl;
}
