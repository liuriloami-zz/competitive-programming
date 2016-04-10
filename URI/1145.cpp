#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= y; i++) {
        printf("%d", i);
        if (i%x == 0)
            printf("\n");
        else
        printf(" ");
    }
    return 0;
}
