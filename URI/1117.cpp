#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double x, y, in;
    while (scanf("%lf", &in) == 1 && (in < 0 || in > 10))
        printf("nota invalida\n");
    x = in;
    while (scanf("%lf", &in) == 1 && (in < 0 || in > 10))
        printf("nota invalida\n");
    y = in;
    printf("media = %.2lf\n", (x+y)/2.0);
    return 0;
}
