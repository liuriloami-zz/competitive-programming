#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    scanf("%d, &n", &n);
    for (int i = 2; i <= n; i+=2)
        printf("%d^2 = %d\n", i, i*i);
    return 0;
}
