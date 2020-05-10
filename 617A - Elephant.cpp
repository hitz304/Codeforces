#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    int step=0;
    cin >> a;
	for(int i=5;i > 0;i-=0){
		if(a - i >= 0){
			a-=i;
			step++;
		}
		else
			i--;
	}
	cout << step;
	return 0;  
}
 
 
