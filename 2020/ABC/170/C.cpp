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
    int x,n;
    cin >> x >> n;

    if (n == 0) {
        cout << x << endl;
        return 0;
    }

    set<int> m;
    bool is_x = true;
    rep (i, n) {
        int tmp = 0;
        cin >> tmp;
        m.insert(tmp);
        if (tmp == x) is_x = false;
    }
    if (is_x) {
        cout << x << endl;
        return 0;
    }

    ll ans = x;
    int min = x;
    int max = x;
    while (1) {
        --min;
        if (!m.count(min)) {
            ans = min;
            break;
        }

        ++max;
        if (!m.count(max)) {
            ans = max;
            break;
        }
    }

    cout << ans << endl;
}
