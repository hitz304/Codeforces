#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int num;
	int even,sumE;
	int odd,sumO;
	cin >> n;
	for(int i=0; i < n;i++){
		cin >> num;
		even = 2;
		odd  = 1;
		sumO = 0;
		sumE = 0;
		if(num / 2 % 2 != 0)
			cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			for(int i=1; i<=num;i++){
				if(i <= num/2){
					sumE += even;
					cout << even << " ";
					even += 2;
				}
				else if(i < num){
					sumO += odd;
					cout << odd << " ";
					odd += 2;
				}else{
					cout << sumE - sumO << endl;
				}	
			}
		}
	}
	return 0;
}
