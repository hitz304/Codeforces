#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,m,total = 0, cnt = 0;
	
	cin >> n;
	
	for(int i=0;i < n/2;i+=2)
	{
		if(i % 2 == 0)
			total = i;
	}
	m = n - total;
	
	while(true){
		int cnt = 0;
		for(int i=1; i <= m;i++){
			if(m % i == 0)
				cnt++;	
		}
		if(cnt != 2)
			break;
		else{
			m -= 2;
			total += 2;
		}	
	}	
	cout << total << " " << m;
	return 0;
}
