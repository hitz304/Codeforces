#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,r,ans;
	cin >> k >> r;
	for(int i=1;;i++){
		if((k * i) % 10 == 0 || (k * i - r ) % 10 == 0){
			ans = i;
			break;
		}
	}
	cout << ans;
	return 0;
}
