#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a;
	
	for(int i=1; i <= n;i++){
		if(i == 1)
			a += "I hate";
		else if(i == 2)
			a += " that I love";
		else if(i == 3)
			a += " that I hate";
		
		if(i == 3){
			i -= 2;
			n -= 2;
		}
	}
	cout << a << " it";
	return 0;
}
