#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main (int argc, char** argv) {
    int n, k;
    cin >> n >> k;
    map<int, int> occ;
    vector<int> neg, pos;
    for (int i = 0; i < k; i++) {
        int input;
        cin >> input;
        if (occ[input-n]) continue;
        occ[input-n] = 1;
        if (input < n) {
            neg.push_back(n-input);
        } else {
            pos.push_back(input-n);
        }
    }
    if (occ[0]) {
        cout << 1 << endl;
        return 0;
    }
    int res = INT_MAX;
    for (int i = 0; i < neg.size(); i++) {
        for (int j = 0; j < pos.size(); j++) {
            int comp = gcd(neg[i], pos[j]);
            res = min(res, neg[i]/comp + pos[j]/comp);
        }
    }
    if (res == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << res << endl;
    }
}