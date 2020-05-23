#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,n,ans = 0,pol = 0;
	vector<int> num;
	cin >> n;
	for(int i=0; i < n;i++){
		cin >> x;
		num.push_back(x);
	}
	for(int i=0 ; i < n;i++){
		if(num[i] > 0){
			pol += num[i];
		}
		else if(num[i] < 0 && pol > 0)
			pol--;
		else ans++;	
	}
	cout << ans << endl;
	return 0;
	
}
