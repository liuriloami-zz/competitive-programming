#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double n;
    int res = 0;
    for (int i = 0; i < 6; i++) {
        scanf ("%lf", &n);
        if (n > 0)
            res++;
    }
    printf("%d valores positivos\n", res);
    return 0;
}
