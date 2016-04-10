#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    float delta = pow(b,2) - 4*a*c;
    if (delta < 0 || a == 0)
        printf("Impossivel calcular\n");
    else {
        printf("R1 = %.5lf\n", (-1*b + sqrt(delta)) / (2*a));
        printf("R2 = %.5lf\n", (-1*b - sqrt(delta)) / (2*a));
    }
    return 0;
}   
