#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
  	char ch;
  	bool bef = false;
  	while ((ch = getchar()) != EOF) {
    	if (ch == 's' || ch == 'j' || ch == 'b' || ch=='z' || ch=='p'
		|| ch=='v' || ch=='x') {
      		ch = 'f';
    	} else if (ch == 'S' || ch == 'J' || ch == 'B' || ch=='Z' || ch=='P'
		|| ch=='V' || ch=='X') {
      		ch = 'F';
    	}
    	if (!((ch == 'f' || ch == 'F') && bef))
      		cout << ch;
		if ((ch == 'f' || ch == 'F'))
      		bef = true;
    	else
      		bef = false;
  	}
  	return 0;
}
