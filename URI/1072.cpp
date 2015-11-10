#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n, x, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x >= 10 && x <= 20) count++;
    }
    cout << count << " in\n";
    cout << n-count << " out\n";
    return 0;
}
