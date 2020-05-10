#include<iostream>
using namespace std;
int main(){
	string s,ans;
	cin >> s;
	int count=0;
	int n = s.size();
	for(int i = 0;i < n; i++) {
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			i+=2;
			ans += " ";
		}		
		else 
			ans += s[i];
	}
	cout << ans;
	return 0;
}
