#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum,n,ans;
	int num[10][10];
	cin >> n;
	for(int i=0; i < n;i++){
		num[i][0] = 1;
		for(int j = 0; j < n;j++){
			num[0][j] = 1;
		}
	}
	for(int i=1; i < n;i++){
		for(int j = 1; j < n;j++){
			num[i][j] = num[i-1][j] + num[i][j-1];
			ans = num[i][j];
		}
	}
	if(n == 1)
		cout << "1";
	else cout << ans;
	return 0;
	
}
