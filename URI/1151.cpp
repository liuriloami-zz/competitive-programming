#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int a=0, b=1, c=1, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i != 0) cout << " ";
        cout << a;
        a = b; b = c; c = a+b;
    }
    cout << endl;
}
