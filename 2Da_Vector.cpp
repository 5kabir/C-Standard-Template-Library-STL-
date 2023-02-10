#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void prin(vector<vector<int> > data,string text=""){
    cout << text << endl;

    cout << "Total Row: " << data.size() << endl;
    for(vector<int> row: data){
        cout<<"\t["<< row.size() <<"] ->";
        for(int colum:row)
            cout << colum << " ";
            cout <<"\n";
        }
        cout <<"\n";

    
}




int main(){

//vector <vector<int>> data(3, vector<int> (4,5));

// vector< vector<int>> data;
// for(int i=0; i<3; i++){
//     vector<int> row;
//     for(int j = 0; j<4; j++){
//         row.push_back(i*j);
//     }
//     data.push_back(row);
// }
vector<vector<int>> data;
for(int i=1; i<=4; i++){
    vector<int> row;
    int d =i;
    while( d != 1){
        row.push_back(d);
        if(d%2 == 0) d/=2;
        else d = d*3+1;
    }
    data.push_back(row);

}

 prin(data);

 return 0;

}