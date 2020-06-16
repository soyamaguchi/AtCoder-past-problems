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
    int N;
    cin >> N;

    vl a(1000010, 0);
    set<ll> m;
    set<ll> m2;
    rep (i, N) {
        ll tmp = 0;
        cin >> tmp;

        if (m.count(tmp)) {
            m2.insert(tmp);
        } else {
            m.insert(tmp);
        }

        a[tmp] = 1;
    }

    rep (i, a.size()) {
        if (!a[i]) continue;
        for (int j = i*2; j<=a.size(); j += i) {
               a[j] = 0;
        }
    }

    for (auto st : m2) a[st] = 0;

    ll ans = 0;
    rep (i, a.size()) {
        if (a[i]) ans++;
    }

    cout << ans << endl;
}
