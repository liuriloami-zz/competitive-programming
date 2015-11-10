#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
  	int a, b, c;
  	cin >> a >> b >> c;
  	if ( (b < a && c >= b) ||
    	(b > a && c-b >= b-a) ||
    	(b < a && c-b > b-a) ||
    	(b == a && c > b))
    	cout << ":)" << endl;
  	else
    	cout << ":(" << endl;
  	return 0;
}
