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
    int N;

    cin >> N;

    string sn = to_string(N);

    int n = sn.size();
    int one = sn[n-1] - '0';

    if (one == 2 || one == 4 || one == 5 || one == 7 || one == 9) {
        cout << "hon" << endl;
    } else if (one == 0 || one == 1 || one == 6 || one == 8) {
        cout << "pon" << endl;
    } else if (one == 3) {
        cout << "bon" << endl;
    }
}
