#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests;
    cin >> tests;
    while (tests--) {
        int n;
        bool prime=true;
        cin >> n;
        if (n%2 == 0 && n != 2)
            prime = false;
        for (int i = 3; i < n; i+=2)
            if (n%i == 0)
                prime = false;
        if (prime)
            cout << n << " eh primo\n";
        else
            cout << n << " nao eh primo\n";
    }
    return 0;
}
