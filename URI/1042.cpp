#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int vet1[3], vet2[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vet1[i]);
        vet2[i] = vet1[i];
    }
    sort(vet1, vet1+3);
    for (int i = 0; i < 3; i++)
        printf("%d\n", vet1[i]);
    printf("\n");
    for (int i = 0; i < 3; i++)
        printf("%d\n", vet2[i]);
    return 0;
}  
