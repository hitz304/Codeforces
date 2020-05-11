#include<iostream>
#include<iomanip>
using namespace std;
 
int main(){
	int n;
	float num,total=0;
	cin >> n;
	for(int i=0; i < n;i++){
		cin >> num;
		total += num/100;
	}	
	total = total / n * 100;
	cout << fixed << setprecision(12) << total;
	return 0;
}
