#include<iostream>
using namespace std;
int main(){
	int n;
	char x;
	int CntA=0,CntB=0;
	cin >> n;
	for(int i=0;i < n;i++){
		cin >> x;
		if(x == 'A')
			CntA++;
		else 
			CntB++;
	}
	if(CntA > CntB)
		cout << "Anton";
	else if (CntB > CntA)
		cout << "Danik";
	else
		cout << "Friendship";
	return 0;
}
