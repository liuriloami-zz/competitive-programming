#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    scanf("%d", &n);
    while (n--) {
        double x, y;
        scanf("%lf %lf", &x, &y);
        if (y == 0) printf("divisao impossivel\n");
        else printf("%.1lf\n", x/y);
    }
    return 0;
}
