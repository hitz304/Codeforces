#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	string x;
	int count=0;
	x = s;
	for(int i=0;i < s.size();i++){
		if(s[i] <= 90)
			count++;
	}
 
	for(int i=0;i < s.size();i++){
		if(count == s.size()){
			x[i] = s[i] + 32;
		}
		else if(s[0] > 90 && count == s.size()-1){
			if(i != 0)
				x[i] = s[i] + 32;
			else 
				x[0] -= 32;	
		}			
	}
	for(int i=0;i < s.size();i++){
		cout << x[i];
	}
	return 0;
}
