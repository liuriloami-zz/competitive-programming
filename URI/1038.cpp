#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int cod;
    double valor;
    scanf("%d %lf", &cod, &valor);
    if (cod == 1) valor *= 4;
    if (cod == 2) valor *= 4.5;
    if (cod == 3) valor *= 5;
    if (cod == 4) valor *= 2;
    if (cod == 5) valor *= 1.5;
    printf("Total: R$ %.2lf\n", valor);
    return 0;
}   
