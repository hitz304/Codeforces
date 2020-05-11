#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,m,x;
	vector<int> num;
	int min = INT_MAX;
	
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		cin >> x;
		num.push_back(x);
	}
	sort(num.begin(),num.end());
	for(int i = 0;i < m;i++) {
		if(n-1+i < m  && (min > num[n-1+i] - num[i])) {
			min = num[n-1+i] - num[i];
		}
	}
	cout <<min;
	return 0;
}
