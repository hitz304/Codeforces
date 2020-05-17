#include<iostream>
 
using namespace std;
int main(){
	long int n,num;
	cin >> n;
	for(int i=0; i < n;i++){
		cin >> num;
		if(num % 2 == 0 && num != 2)
			cout << num/2-1 << endl;
		else if(num <= 2)
			cout << "0" << endl;
		else
			cout << num/2 << endl;
	}
	return 0;
}
