// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//        int n;
//        cin >> n;
//        int a[n];
//        for(int i=0; i<n; ++i){
//         cin >> a[i];
//        }

//        sort(a, a+n); // (a+2, a+n) when 2nd index sort start hbe.
//        for(int i=0; i<n; ++i){
//         cout << a[i] << " " ;

//        }
//        cout << endl;
//     return 0;
// }


//Sort code with vector:--
#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin >> n;
       vector<int> a(n);
       for(int i=0; i<n; ++i){
        cin >> a[i];
       }

       sort(a.begin(), a.end()); // (a+2, a+n) when 2nd index sort start hbe.
       for(int i=0; i<n; ++i){
        cout << a[i] << " " ;

       }
       cout << endl;
    return 0;
}