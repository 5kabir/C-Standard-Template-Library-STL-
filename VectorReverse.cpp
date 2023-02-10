// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// int main(){
    
     
//     vector<int> in;  //1 2 3 4  ** this is my anothoer solution **
//      int n;
//      cin >> n;
//      while(n--){
        
//         int d;
//         cin >> d;
//         in.push_back(d);
           

       
//      }
//      cout << "Before reverse: ";
//       for(auto i: in)
//          cout << i <<" "; //1 2 3 4

//        cout << endl;
//        cout << "After reverse: ";
//      for(int j = in.size() ; j > 0; --j)
//       cout<< j << " ";

      
//     //  for(auto i: in)
//     //      cout << i <<" "; //1 2 3 4
    




// return 0;


// }



#include<bits/stdc++.h>
using namespace std;
vector<int> input(){
    vector<int> data;
    int n;
    cin >> n;
    while(n--){
        int d;
        cin >> d;
        data.push_back(d);

    }
    return data;
}

vector<int> reverse(vector<int> data){
    // int ln = data.size();
    // vector<int> rData;
    // for(int i =ln; i >0; --i){
    //     rData.push_back(i);  // we can use rData.push_back(data[i])
    vector<int> rData;
    while(!data.empty()){
       int le = data.back();   // Master Solution Alhamdulillah
       rData.push_back(le);
       data.pop_back();


    }
    return rData;

}

void output(vector <int> data){
   for(auto i : data){
    cout << i << " ";
   }
}


int main(){

       vector<int> data;
       data = input();
       data = reverse(data);
       output(data);

       return 0;
}