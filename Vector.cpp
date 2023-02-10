#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){

    //vector<int>data(5,2);
      vector<int> data = {1, 2, 3 , 7, 8, 9};
      //vector<int> data2 = {7, 8, 9};
      //vector<int> data({1,2,3,4,5});
    //   vector<int> data2 = data;
    //data.push_back(8);
    //data.pop_back();
    // data.insert(data.begin()+1,2, 7);  
    // cout <<"Before swap: ";
    // cout << endl;

   

    
    // for(auto i : data)
    //     cout<<i <<" ";
    //     cout << endl;
        
    //     for(auto j : data2)
    //     cout<< j <<" ";
    //     cout << endl;
    

    //    data.swap(data2);
        
    //     cout<<"After swap: ";
    //     cout << endl;
    //     for(auto i : data)
    //     cout<<i <<" ";
    data.erase(data.begin()+1, data.end()-2);

        cout << endl;
        for(auto j : data)
        cout<< j <<" ";
    

    // for(int i =0; i<data.size(); i++){
    //     cout<<data[i] << " ";
    // }
  
}