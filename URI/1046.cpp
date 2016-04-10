#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int ini, end; 
    scanf("%d %d", &ini, &end);
    if (end <= ini)
        end += 24;
    printf("O JOGO DUROU %d HORA(S)\n", end-ini);
    return 0;
}   
