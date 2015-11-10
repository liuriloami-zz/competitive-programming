#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    long long int fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 61; i++)
        fib[i] = fib[i-1] + fib[i-2];
    int tests;
    scanf("%d", &tests);
    while (tests--) {
        int n;
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib[n]);
    }
    return 0;
}
