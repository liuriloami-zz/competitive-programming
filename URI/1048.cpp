#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double salario, ganho, porcentagem;
    scanf("%lf", &salario);
    if (salario <= 400)
        porcentagem = 15;
    else if (salario <= 800)
        porcentagem = 12;
    else if (salario <= 1200)
        porcentagem = 10;
    else if (salario <= 2000)
        porcentagem = 7;
    else
        porcentagem = 4;
    ganho = salario*porcentagem*0.01;
    printf("Novo salario: %.2lf\n", ganho+salario);
    printf("Reajuste ganho: %.2lf\n", ganho);
    printf("Em percentual: %.0lf %%\n", porcentagem);
    return 0;
} 
