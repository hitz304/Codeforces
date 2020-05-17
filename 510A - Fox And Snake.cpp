#include<iostream>
 
using namespace std;
int main(){
	unsigned short n,m;
	cin >> n >> m;
	unsigned short temp=1;
	for(unsigned short i=1; i<=n; i++){
		for(unsigned short j =0; j < m;j++){
			if(i % 2 != 0)
				cout << "#";
			else {
				if(i / 2 % 2 != 0 && j == m-1)
					cout << "#";
				else if(i / 2 % 2 == 0 && j == 0)
					cout << "#";
				else
					cout << ".";
			}
		}
		cout << endl;
	}
	return 0;
}
