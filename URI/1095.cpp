#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    for (int j = 60; j >= 0; j-=5)
        printf("I=%d J=%d\n", 1 + ((60-j)/5)*3, j);
    return 0;
}
