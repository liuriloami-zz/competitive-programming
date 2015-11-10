#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int cod1, cod2;
    int qtd1, qtd2;
    double val1, val2;
    cin >> cod1 >> qtd1 >> val1;
    cin >> cod2>> qtd2 >> val2;
    printf("VALOR A PAGAR: R$ %.2f\n", qtd1*val1 + qtd2*val2);
    return 0;
}
