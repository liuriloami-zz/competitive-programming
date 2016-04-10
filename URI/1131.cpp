#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int x, y, opt;
    int inter=0, gremio=0, draws=0;
    do {
        scanf("%d %d", &x, &y);
        if (x > y) inter++;
        else if (x < y) gremio++;
        else draws++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opt);
    } while (opt == 1);
    printf("%d grenais\n", inter+gremio+draws);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draws);
    if (inter > gremio)
        printf("Inter venceu mais\n");
    else if (inter < gremio)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}
