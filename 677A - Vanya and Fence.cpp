#include<iostream>
using namespace std;
int main(){
	int n,x,num;
	cin >> n >> x;
	int sum=0;
	for(int i=0;i < n;i++){
		cin >> num;
		if(num > x)
			sum += 2;
		else
			sum++;
	}
	cout << sum;
	return 0;
}
