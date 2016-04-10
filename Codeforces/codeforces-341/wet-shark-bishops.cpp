#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, diagR[3000], diagL[3000], x, y, res=0;
    cin >> n;
    for (int i = 0; i < 3000; i++) 
        diagR[i] = diagL[i] = 0;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        diagR[x-y+1000]++;
        diagL[y+x]++;
    }
    for (int i = 0; i < 3000; i++) {
        res += diagR[i]*(diagR[i]-1)/2;
        res += diagL[i]*(diagL[i]-1)/2;
    }
    cout << res << endl;
    return 0;
}
