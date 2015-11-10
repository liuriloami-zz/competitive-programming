#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
     
    double vet[3];
    for (int i = 0; i < 3; i++)
        scanf("%lf", &vet[i]);
    sort(vet, vet+3, greater<int>());
     
    double a = vet[0];
    double b = vet[1];
    double c = vet[2];
     
    if (a >= b+c)
        printf("NAO FORMA TRIANGULO\n");
    else {
        if (pow(a,2) == pow(b,2) + pow(c,2))
            printf("TRIANGULO RETANGULO\n");
        if (pow(a,2) > pow(b,2) + pow(c,2))
            printf("TRIANGULO OBTUSANGULO\n");
        if (pow(a,2) < pow(b,2) + pow(c,2))
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && a == c)
            printf("TRIANGULO EQUILATERO\n");
        if ( (a == b && a != c) || (b == c && b != a) || (c == a && c != b) ) 
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}  
