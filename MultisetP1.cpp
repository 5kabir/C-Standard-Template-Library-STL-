#include<bits/stdc++.h>
using namespace std;
#define ll  long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        multiset<long long> bags;
        for(int i=0; i<n; ++i){
            ll candty_ct;
            cin >> candty_ct;
            bags.insert(candty_ct);
        }
        ll total_candies = 0;
        for(int i=0; i < k; ++i){
            auto last_it = (--bags.end());
            ll candy_ct = *last_it;

             total_candies += candy_ct;
             bags.erase(last_it);
             bags.insert(candy_ct / 2);

        }
     cout << total_candies << endl;

    }
}