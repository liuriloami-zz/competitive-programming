#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests;
    cin >> tests;
    for (int i = 1; i <= tests; i++) {
        string sheldon, raj;
        cin >> sheldon >> raj;
        cout << "Caso #" << i << ": ";
        if (sheldon == raj)
            cout << "De novo!" << endl;
        else if ( (sheldon == "tesoura" && raj == "papel")
            || (sheldon == "papel" && raj == "pedra")
            || (sheldon == "pedra" && raj == "lagarto")
            || (sheldon == "lagarto" && raj == "Spock")
            || (sheldon == "Spock" && raj == "tesoura")
            || (sheldon == "tesoura" && raj == "lagarto")
            || (sheldon == "lagarto" && raj == "papel")
            || (sheldon == "papel" && raj == "Spock")
            || (sheldon == "Spock" && raj == "pedra")
            || (sheldon == "pedra" && raj == "tesoura"))
            cout << "Bazinga!" << endl;
        else
            cout << "Raj trapaceou!" << endl;
 
    }
    return 0;
}
