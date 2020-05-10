#include<iostream>
#include<vector>
using namespace std;
 
 
int main(){
	int n,x;
	vector<int> a;
	int count=1;
	cin >> n;
	for(int i=0;i < n;i++){
		cin >> x;
		a.push_back(x);
	}
	for(int i=1;i < a.size();i++){
		if(a[i-1] != a[i])
			count++;
	}
	cout << count;
	return 0;
}
