#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a+b > c && b+c > a && c+a > b)
        printf("Perimetro = %.1lf\n", a+b+c);
    else
        printf("Area = %.1lf\n", 0.5*(a+b)*c);
    return 0;
} 
