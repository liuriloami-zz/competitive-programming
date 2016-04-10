#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    string str[3];
    cin >> str[0] >> str[1] >> str[2];
    if (str[0] == "vertebrado") {
        if (str[1] == "ave") {
            if (str[2] == "carnivoro")
                cout << "aguia\n";
            else
                cout << "pomba\n";
        } else {
            if (str[2] == "onivoro")
                cout << "homem\n";
            else
                cout << "vaca\n";
        }
    } else {
        if (str[1] == "inseto") {
            if (str[2] == "hematofago")
                cout << "pulga\n";
            else
                cout << "lagarta\n";
        } else {
            if (str[2] == "hematofago")
                cout << "sanguessuga\n";
            else
                cout << "minhoca\n";
        }
    }
    return 0;
}  
