#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        cout << x*y/2 << " cm2" << endl;
    }
    return 0;
}
