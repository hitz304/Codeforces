#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	int num,loop;
	vector<int> vec;
	cin >> n;
	for(int i=0; i < n;i++){
		cout << endl;
		cin >> num;
		int temp = 1; 
		while(num > 0)
		{
			a = num % 10 * temp;
			num  /= 10;
			temp *= 10;
			if(a != 0)
				vec.insert(vec.begin(),a);
		}
		loop = vec.size();
		cout << loop << endl;
		for(auto itr : vec)
			cout << itr << " ";
		vec.clear();
	}
}
