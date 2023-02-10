#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout <<m.size() <<endl;
for(auto &pr : m){
        cout << pr.first <<" " <<pr.second <<endl;


}
}


int main(){
    map<int,string>m;

    m[1] ="abc";
    m[2] = "cdc";
    m[3] = "acd";
    m.insert({4,"afg"});
    //m.find(3);
   
    
    
    
    auto it = m.find(3);
    m.erase(it);
    // if(it == m.end()){
    //     cout <<"No Value.";
    // }else{
    //     cout << (*it).first <<" " <<(*it).second <<endl;
    // }

    // map<int ,string> :: iterator it;
    // for(it = m.begin(); it != m.end(); ++it){
    //     cout <<(*it).first <<" " <<(*it).second <<endl;

    // }
    print(m);


    }


