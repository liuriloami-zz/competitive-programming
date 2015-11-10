#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double a, b, c;
    cin >> a >> b >> c;
    printf("TRIANGULO: %.3f\n", a*c*0.5);
    printf("CIRCULO: %.3f\n", 3.14159*pow(c,2));
    printf("TRAPEZIO: %.3f\n", (a+b)*0.5*c);
    printf("QUADRADO: %.3f\n", b*b);
    printf("RETANGULO: %.3f\n", a*b);
    return 0;
}
