#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    int n, k, pockets = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        pockets += (p+k-1)/k;
    }
    cout << (pockets+1)/2 << endl;
}