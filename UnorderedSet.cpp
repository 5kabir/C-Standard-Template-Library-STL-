#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){

    unordered_set<string> s;
    int n;
    cin>> n;
    for(int i=0; i<n; ++i){
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while(q--){
        string str;
        cin >> str;
        if(s.find(str) == s.end()){
            cout << "NO" << endl;
        }
        else {
            cout << "Yes" << endl;

        }


    }
}