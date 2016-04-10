#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests;
    cin >> tests;
    while (tests--) {
        int sum=0, n;
        cin >> n;
        for (int i = 1; i < n; i++)
            if (n%i == 0)
                sum += i;
        if (n == sum)
            cout << n << " eh perfeito\n";
        else
            cout << n << " nao eh perfeito\n";
    }
    return 0;
}
