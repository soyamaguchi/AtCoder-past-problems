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

const int INF = 1001001001;

int main() {
    ll N;
    cin >> N;
    vl n(N);
    bool is_zero = false;
    rep (i, N) {
        cin >> n[i];
        if (n[i] == 0) is_zero = true;
    }

    ll max = 1000000000000000000;
    ll ans = 1;
    rep (i, N) {
        if (max/ans < n[i]) {
            ans = -1;
            break;
        } else {
            ans *= n[i];
        }
    }

    if (is_zero) ans = 0;

    cout << ans << endl;
}
