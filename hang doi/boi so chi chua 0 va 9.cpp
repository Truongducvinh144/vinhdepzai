#include <iostream>
#include <set>
#include<vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include<stack>
#include<queue>
using namespace std;
using ll = long long;

vector<ll> res;
ll ans[101];

void inti(){
    queue<string>q;
    q.push("9");
    res.push_back(9);
    while(1){
        string top = q.front();
        q.pop();
        if(top.length() == 10) break;
        res.push_back(stoll(top + "0"));
        res.push_back(stoll(top + "9"));
        q.push(top + "0");
        q.push(top + "9");
        
    }
    for(int i = 0; i <= 100 ; i++){
        for(ll x : res){
            if(x % i == 0){
                ans[i] = x;
                break;
            }
        }
    }
}

int main(){
   inti();
   int t; cin >> t; // so test key
   while(t--){
    int n; cin >> n;
    cout << ans[n];
    cout << endl;

   }
}
