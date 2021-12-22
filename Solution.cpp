#include <bits\stdc++.h>
using namespace std;

// this file is to try coding problems
bool isPerfectSquare(double x) {   
  double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 

int main() {

	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	for (int i = n - 1; i >= 0; i--){
		int chk = n - i;

		if ( chk > 3 && (isPerfectSquare(i) || i % 2 == 0) ){
			if (isPerfectSquare(chk) || chk % 2 == 0) {
				cout << chk << " " << i << endl;
				return 0;
			}
		}
	}
	

	return 0;   
}
