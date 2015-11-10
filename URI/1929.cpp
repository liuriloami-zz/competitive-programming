#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
	int n[4];
  	bool res = false;
  	for (int i = 0; i < 4; i++)
    	cin >> n[i];
  	for (int i = 0; i < 4; i++)
    	for (int j = i+1; j < 4; j++)
    	  	for (int k = j+1; k < 4; k++)
    	    	if (n[i]+n[j] > n[k] && n[i]+n[k] > n[j] && n[j]+n[k] > n[i])
            		res = true;
	if (res) 
		cout << "S" << endl;
  	else 
		cout << "N" << endl;
  	return 0;
}
