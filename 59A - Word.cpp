#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int a=0,b=0;
	for(int i=0;i < s.size();i++){
		if(s[i] < 91)
			a++;
		else
			b++;
	}
	for(int i=0;i < s.size();i++){
		if(b > a){
			if(s[i] < 91)
				s[i] += 32;
		}
		else if(a > b){
			if(s[i] > 90)
				s[i] -= 32;
		}
		else{
			if(s[i] < 91)
				s[i] += 32;
		}
	}
	for(int i=0;i < s.size();i++){
		cout << s[i];
	}
	return 0;
}
