#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin >> t;
	for(int i=0 ; i < t;i++){
		cin >> n;
		int pile_1 = 0;
		int pile_2 = 0;
		for(int j=1; j <= n;j++){
			if(j < n / 2 || j == n)
				pile_1 += pow(2,j);
			else 
				pile_2 += pow(2,j);
		}
		cout << abs(pile_1-pile_2) << endl;
	}
	return 0;
	
}
