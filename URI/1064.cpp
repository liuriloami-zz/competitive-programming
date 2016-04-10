#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double n, sum = 0;
    int pos = 0, count = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &n);
        if (n > 0) {
            pos++;
            sum += n;
            count++;
        }
    }
    printf("%d valores positivos\n", pos);
    printf("%.1lf\n", sum/count);
    return 0;
}
