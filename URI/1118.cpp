#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double x, y, in;
    int opt;
    while (1) {
        while (scanf("%lf", &in) == 1 && (in < 0 || in > 10))
            printf("nota invalida\n");
        x = in;
        while (scanf("%lf", &in) == 1 && (in < 0 || in > 10))
            printf("nota invalida\n");
        y = in;
        printf("media = %.2lf\n", (x+y)/2.0);
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opt);
        } while (opt < 1 || opt > 2);
        if (opt == 2) break;
    }
    return 0;
}
