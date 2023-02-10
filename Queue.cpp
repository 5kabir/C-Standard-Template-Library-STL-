#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string> q;
    q.push("abc");
    q.push("egh");
    q.push("ohi");
    q.push("klj");
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

}