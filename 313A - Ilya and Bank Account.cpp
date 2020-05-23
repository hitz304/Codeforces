#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int last,Blast;
	cin >> n;
	if(n > 0)
		cout << n;
	else{
		n    *= -1;
		last  = n % 10;
		Blast = n / 10 % 10;
		if(last > Blast)
			n /= 10;
		else {
			n /= 10;
			n -= Blast;
			n += last;
		}
		cout << n * -1;	
	}
	
}
