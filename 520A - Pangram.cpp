#include<iostream>
#include<set>
using namespace std;
int main() {
	int n;
	char s[100];
	set<char> myset;
	cin >> n;
	
	for(int i=0;i<n;i++) {
		cin >> s[i];
		if(s[i] <= 90)
			s[i] += 32;
		myset.insert(s[i]);
	}
	
	if(myset.size() == 26)
		cout << "YES";
	else 
		cout << "NO";	
     return 0;
}
