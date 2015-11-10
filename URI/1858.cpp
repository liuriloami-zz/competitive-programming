#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
	int n, t, idx=-1, val;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (idx == -1 || t < val) {
	  		idx = i+1;
	  		val = t;
		}
	}
	cout << idx << endl;
	return 0;
}
