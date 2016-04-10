#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
  	int n;
  	cin >> n;
  	for (int i = 0; i < n; i++) {
    	int n[2];
	    string name[2], choice[2];
    	cin >> name[0] >> choice[0];
    	cin >> name[1] >> choice[1];
    	cin >> n[0] >> n[1];
    	if ( ((n[0]+n[1])%2 == 0 && choice[0] == "PAR") ||
      		((n[0]+n[1])%2 == 1 && choice[0] == "IMPAR"))
      		cout << name[0] << endl;
    	else
      	cout << name[1] << endl;
 	 }
  	return 0;
}
