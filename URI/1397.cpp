#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    while (cin >> n && n != 0) {
        int v1=0, v2=0;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            if (x > y) v1++;
            if (y > x) v2++;
        }
        cout << v1 << " " << v2 << endl;
    }
}
