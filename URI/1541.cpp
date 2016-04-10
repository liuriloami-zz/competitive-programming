#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int a, b, c;
    while (scanf("%d", &a) == 1 && a != 0) {
        scanf("%d %d", &b, &c);
        printf("%d\n", (int)sqrt(a*b*100/c));
    }
    return 0;
}
