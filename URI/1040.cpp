#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
     
    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
     
    double media = 0.2*n1 + 0.3*n2 + 0.4*n3 + 0.1*n4;
    printf("Media: %.1lf\n", media);
     
    if (media >= 7)
        printf("Aluno aprovado.\n");
    else if (media < 5)
        printf("Aluno reprovado.\n");
    else {
        printf("Aluno em exame.\n");
         
        double exame;
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
         
        media = (media+exame)/2.0;
        if (media >= 5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", media);
    }
    return 0;
} 
