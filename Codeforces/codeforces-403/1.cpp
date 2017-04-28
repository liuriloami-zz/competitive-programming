#include <bits/stdc++.h>
using namespace std;

int n, in, cur = 0, res = 0;
map<int, int> socks;

int main (int argc, char** argv) {    
    scanf("%d", &n);
    for (int i = 0; i < 2*n; i++) {
        scanf("%d", &in);
        if (socks[in]) {
            socks[in] = 0;
            cur--;
        } else {
            socks[in] = 1;
            cur++;
            res = max(res, cur);
        }
    }
    printf("%d\n", res);
    return 0;
}