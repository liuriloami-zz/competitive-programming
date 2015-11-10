#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    for (int i = 0; i < 33; i++)
        printf("I=%g J=%g\n", 0.2*(i/3), i%3+1+0.2*(i/3));
    return 0;
}
