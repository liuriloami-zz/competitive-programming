#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int iniH, iniM, endH, endM; 
    scanf("%d %d %d %d", &iniH, &iniM, &endH, &endM);
    if (endH < iniH || (endH == iniH && endM <= iniM))
        endH += 24;
    if (endM < iniM) {
        endH--;
        endM += 60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", endH-iniH, endM-iniM);
    return 0;
}   
