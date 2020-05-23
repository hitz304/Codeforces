#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int k,num,cnt=0;
	cin >> n >> k;
	for(int i=0 ; i < n;i++){
		cin >> num;
		if(5 - num >= k)
			cnt++;
	}
	cout << cnt / 3;
	return 0;
}
