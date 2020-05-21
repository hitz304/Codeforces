#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,cnt=0;
	cin >> n >> m;
	if(m > n)
		cout << n;
	else {
		for(int i=1;i <= n+cnt;i++){
			if(i % m == 0)
				cnt++;
		}
		cout << cnt+n;
	}
	return 0;
}
