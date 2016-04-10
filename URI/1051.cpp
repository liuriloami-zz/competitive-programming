#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double salary, taxes = 0;
    scanf("%lf", &salary);
     
    if (salary > 2000)
        taxes += min(1000.0d,salary-2000)*0.08;
    if (salary > 3000)
        taxes += min(1500.0d,salary-3000)*0.18;
    if (salary > 4500)
        taxes += (salary-4500)*0.28;
     
    if (taxes == 0)
        printf("Isento\n");
    else
        printf("R$ %.2lf\n", taxes);
    return 0;
}
