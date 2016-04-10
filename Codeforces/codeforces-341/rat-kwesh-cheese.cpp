#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y, z, m=-1, a[12];
    int idx = -1;
    
    cin >> x >> y >> z;
    
    a[0] = pow(x, pow(y, z));
    a[1] = pow(x, pow(z, y));
    a[4] = pow(y, pow(x, z));
    a[5] = pow(y, pow(z, x));
    a[8] = pow(z, pow(x, y));
    a[9] = pow(z, pow(y, x));
    a[2] = pow(x, y*z);
    a[3] = pow(x, z*y);
    a[6] = pow(y, x*z);
    a[7] = pow(y, z*x);
    a[10] = pow(z, x*y);
    a[11] = pow(z, y*x);
    
    for (int i = 0; i < 12; i++) {
        if (idx == -1 || a[i] > m) {
            m = a[i];
            cout << idx << endl;
            idx = i+1;
        }
    }
    
    cout << idx << endl;
    switch(idx) {
        case 0:
            cout << "x^y^z" << endl;
            break;
        case 1:
            cout << "x^z^y" << endl;
            break;
        case 2:
            cout << "(x^y)^z" << endl;
            break;
        case 3:
            cout << "(x^z)^y" << endl;
            break;
        case 4:
            cout << "y^x^z" << endl;
            break;
        case 5:
            cout << "y^z^x" << endl;
            break;
        case 6:
            cout << "(y^x)^z" << endl;
            break;
        case 7:
            cout << "(y^z)^x" << endl;
            break;
        case 8:
            cout << "z^x^y" << endl;
            break;
        case 9:
            cout << "z^y^x" << endl;
            break;
        case 10:
            cout << "(z^x)^y" << endl;
            break;
        case 11:
            cout << "(z^y)^x" << endl;
            break;
    }
    
    return 0;
}

