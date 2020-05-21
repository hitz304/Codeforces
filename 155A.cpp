#include<iostream>
using namespace std;
int main(){
	int n;
	int num,min,max,answ=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num;
		if(i == 0){
			min = num;
			max = num;
		}
		if(max < num){
			answ++;
			max = num;
		}
		else if(min > num){
			answ++;
			min = num;	
		}
				
	}
	cout << answ << endl;
	return 0;
}
