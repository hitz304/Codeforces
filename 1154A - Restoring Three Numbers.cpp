#include<iostream>
using namespace std;
int main(){
	int num[4];
	int min = 0;
	for(int i=0; i<4; i++){
		cin >> num[i];
		if(min < num[i])
			min = num[i];
	}
	for(int i=0; i<4; i++){
		if(min - num[i] != 0)
			cout << min - num[i] << " ";
	}
	return 0;
}
