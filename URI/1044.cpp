#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (max(a,b) % min(a,b) == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}   
