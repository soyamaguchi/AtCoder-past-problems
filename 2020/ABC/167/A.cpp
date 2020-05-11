#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    string T;

    cin >> S >> T;

    bool s = (S.size() + 1) == T.size();
    T.pop_back();
    bool n = S == T;

    string ans = (s && n) ? "Yes" : "No";

    cout << ans << endl;
}
