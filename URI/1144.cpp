#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n*2; i++) {
        int a = (i+2)/2;
        int b = pow(a,2) + (i%2);
        int c = pow(a,3) + (i%2);
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
