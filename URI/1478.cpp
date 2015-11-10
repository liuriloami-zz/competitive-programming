#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j != 0) printf(" ");
                printf("%3d",abs(i-j)+1);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
