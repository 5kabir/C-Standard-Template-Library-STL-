#include<bits/stdc++.h>
using namespace std;
int main(){

	int tp;
	cin >> tp;
	while (tp -- )
	{
		string s;
		cin >> s;
		string t;
		while (t.size() < s.size()) t += "Yes";
		t += "Yes";
		puts(t.find(s) != string::npos ? "YES" : "NO");
	}
	return 0;
	
}
