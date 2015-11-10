#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        printf("X[%d] = %d\n", i, max(1,n));
    }
    return 0;
}
