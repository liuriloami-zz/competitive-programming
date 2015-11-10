#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int biggest = (int)pow(2,2*n-2);
        int digits = 0;
        while (biggest != 0) {
            digits++;
            biggest /= 10;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j != 0) printf(" ");
                printf("%*d", digits, (int)pow(2,i+j));
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
