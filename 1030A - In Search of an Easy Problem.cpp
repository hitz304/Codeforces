#include<iostream>
using namespace std;
 
 
int main(){
	int n,flag =0,a;
	cin >> n;
	for(int i=0;i < n;i++){
		cin >> a;
		if(a == 1)
			flag = 1;
	}
	if(flag)
		cout << "HARD";
	else 
		cout << "EASY";
	return 0;
}
