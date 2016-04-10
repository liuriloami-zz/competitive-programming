#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int m, n;
    while (scanf("%d %d", &m, &n) && m > 0 && n > 0) {
        int sum = 0;
        for (int i = min(m,n); i <= max(m,n); i++) {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}
