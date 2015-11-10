#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int npar=0, nimpar=0, n;
    int pares[5], impares[5];
    for (int i = 0; i < 15; i++) {
        scanf("%d", &n);
        if (n%2 == 0)
            pares[npar++] = n;
        else
            impares[nimpar++] = n;
        if (npar == 5) {
            npar = 0;
            for (int i = 0; i < 5; i++)
                printf("par[%d] = %d\n", i, pares[i]);
        }
        if (nimpar == 5) {
            nimpar = 0;
            for (int i = 0; i < 5; i++)
                printf("impar[%d] = %d\n", i, impares[i]);
        }
    }
    for (int i = 0; i < nimpar; i++)
        printf("impar[%d] = %d\n", i, impares[i]);
    for (int i = 0; i < npar; i++)
        printf("par[%d] = %d\n", i, pares[i]);
    return 0;
}
