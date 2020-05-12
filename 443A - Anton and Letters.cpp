#include<bits/stdc++.h>
#include<set>
using namespace std;
 
int main(){
	string s;
	set<char> myset;
	getline(cin,s);
	
	s.erase(s.begin());
	s.erase(s.end()-1);
	s.erase(remove(s.begin(), s.end(), ','), s.end());
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	
	for(int i=0;i < s.size();i++){
		myset.insert(s[i]);
	}
	
	cout << myset.size();
	return 0;
}
