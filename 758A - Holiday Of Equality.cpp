#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> num;
	int n,x,max,ans=0;
	cin >> n;
	for(int i=0; i < n;i++){
		cin >> x;
		num.push_back(x);
	}
	max = *max_element(num.begin(),num.end());
	for(int i=0; i < n;i++){
		ans += max - num[i];
	}
	cout << ans << endl;
	return 0;
}
