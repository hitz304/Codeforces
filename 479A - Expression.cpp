#include<iostream>
using namespace std;
 
int TheLargest(int num[3]);
 
int main(){
	int num[3];
	for(int i=0;i < 3;i++){
		cin >> num[i];
	}
	cout << TheLargest(num);
	return 0;
}
int TheLargest(int num[3]){
	int a,max = 0;
	a = num[0] + num[1]*num[2];
	if(max < a)
		max = a;
	a = num[0] * (num[1]+num[2]);
	if(max < a)
		max = a;
	a = num[0] * num[1] * num[2];
	if(max < a)
		max = a;
	a = (num[0]+num[1]) * num[2];
	if(max < a)
		max = a;
	a = num[0] + num[1] + num[2];
	if(max < a)
		max = a;
	return max;
}
