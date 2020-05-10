#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,NewString;
    cin >> s >> NewString ;
    
    int count = 0;
    
    reverse(s.begin(),s.end());
    
    for (int i = 0;i < s.size();i++) {
        if (s[i] == NewString[i])
            count++;
    }
    int size = s.size();
    if (count == size)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
