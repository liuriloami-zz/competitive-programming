#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int v;
    cin >> v;
    printf("%d\n", v);
     
    printf("%d nota(s) de R$ 100,00\n", v/100);
    v %= 100;
     
    printf("%d nota(s) de R$ 50,00\n", v/50);
    v %= 50;
     
    printf("%d nota(s) de R$ 20,00\n", v/20);
    v %= 20;
     
    printf("%d nota(s) de R$ 10,00\n", v/10);
    v %= 10;
     
    printf("%d nota(s) de R$ 5,00\n", v/5);
    v %= 5;
     
    printf("%d nota(s) de R$ 2,00\n", v/2);
    v %= 2;
     
    printf("%d nota(s) de R$ 1,00\n", v);
    return 0;
}
