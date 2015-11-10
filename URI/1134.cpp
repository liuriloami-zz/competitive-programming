#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int type, alcohol=0, gasoline=0, diesel=0;
    while (cin >> type && type != 4) {
        switch(type) {
            case 1:
                alcohol++;
                break;
            case 2:
                gasoline++;
                break;
            case 3:
                diesel++;
                break;
        }
    }
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}
