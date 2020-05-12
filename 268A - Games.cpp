#include<bits/stdc++.h>

using namespace std;
 
int main(){
	int n,count=0;
	int b[100],a[100];
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i] >> b[i];
	}
	
	for(int i=0; i<n; i++) {
		for(int j=i;j < n;j++) {
			if(a[i] == b[j])
				count++;
			if(b[i] == a[j])
				count++;
		}
	}
	cout << count;
	return 0;
}
