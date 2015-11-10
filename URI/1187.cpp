#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double n;
    int count=0;
    double sum=0;
    string op;
    cin >> op;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++) {
            cin >> n;
            if (j > i && i+j < 11) {
                sum += n;
                count++;
            }
        }
    if (op == "S")
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum/count);
    return 0;
}
