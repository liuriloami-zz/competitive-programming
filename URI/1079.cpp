#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests;
    scanf("%d", &tests);
    while (tests--) {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("%.1lf\n", 0.2*a + 0.3*b + 0.5*c);
    }
    return 0;
}
