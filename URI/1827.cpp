#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                if (i == n/2 && j == n/2)
                    cout << 4;
                else if (i >= n/3 && j >= n/3 && i <= n-1-n/3 && j <= n-1-n/3)
                    cout << 1;
                else if (i == j)
                    cout << 2;
                else if (i+j == n-1)
                    cout << 3;
                else
                    cout << 0;
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
