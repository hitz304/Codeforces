#include<iostream>
using namespace std;
int main(){
	string n,m;
	string s;
	cin >> n >> m;
	for(int i=0;i < n.size();i++) {
		if(n[i] != m[i])
			s += "1";
		else 
			s += "0";
	}
	cout << s;
	return 0;
}
