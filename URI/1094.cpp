#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests, c = 0, r = 0, s = 0;
    scanf("%d", &tests);
    while (tests--) {
        int amount;
        char type;
        scanf(" %d %c ", &amount, &type);
        switch(type) {
            case 'C':
                c += amount;
                break;
            case 'R':
                r += amount;
                break;
            case 'S':
                s += amount;
                break;
        }
    }
    printf("Total: %d cobaias\n", c+r+s);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", 100.0f*c/(c+s+r));
    printf("Percentual de ratos: %.2f %%\n", 100.0f*r/(c+s+r));
    printf("Percentual de sapos: %.2f %%\n", 100.0f*s/(c+s+r));
    return 0;
}
