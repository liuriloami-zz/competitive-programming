#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    while (cin >> n && n != 0) {
        int dir=n;
        string cmd;
        cin >> cmd;
        for (int i = 0; i < n; i++)
            if (cmd[i] == 'E') dir -= 2;
        dir %= 4;
        if (dir < 0) dir += 4;  
        switch (dir) {
            case 0:
                cout << "N" << endl;
                break;
            case 1:
                cout << "L" << endl;
                break;
            case 2:
                cout << "S" << endl;
                break;
            case 3:
                cout << "O" << endl;
                break;
        }
    }
}
