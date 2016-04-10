#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 0)
            cout << "NULL\n";
        else if (x < 0 && x%2 == 0)
            cout << "EVEN NEGATIVE\n";
        else if (x < 0)
            cout << "ODD NEGATIVE\n";
        else if (x%2 == 0)
            cout << "EVEN POSITIVE\n";
        else
            cout << "ODD POSITIVE\n";
    }
    return 0;
}
