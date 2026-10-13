#include <iostream>
#include <set>
#include<vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include<stack>
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<char>st;
    for(char x : s){
        if (x == '('){
            st.push(x);
        }
        else{
            if(st.empty()){
                cout << "invalid\n";
                return;
            }
            else st.pop();
        }
    }
    if(st.empty()){
        cout << "valid" << endl;
    }
    else cout << "invalid" << endl;
}
int main(){
   int t;
   cin >> t;
   while(t--){
    solve();
   }
   
}
