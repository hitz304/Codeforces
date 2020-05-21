#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,check = 0,ans;
	cin >> n >> k;
	for(int i=1; i <= n;i++){
		check += 5 * i;
		if(check > 240 - k)
			break;
		ans = i;
	}
	if(240 - k < 5){
		cout << "0";
	}
	else cout << ans;
	return 0;
}
