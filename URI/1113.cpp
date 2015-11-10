#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int m, n;
    while (scanf("%d %d", &m, &n) && m != n) {
        if (m > n) printf("Decrescente\n");
        else printf("Crescente\n");
    }
    return 0;
}
