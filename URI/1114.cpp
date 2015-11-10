#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int pass;
    while (scanf("%d", &pass) == 1) {
        if (pass == 2002) {
            printf("Acesso Permitido\n");
            break;
        }
        printf("Senha Invalida\n");
    }
    return 0;
}
