#include <bits/stdc++.h>
using namespace std;

int main() {
// cach 1 : dung mang
int n; cin >> n;
   int a[n];
   for(int &x : a) cin >> x;

   for(int i = 0; i < n; i++){
    int res = -1;
    for(int j = i+1; j < n; j++){
        if(a[j] > a[i]){
            res = a[j];
            break;
        }
    }
    cout << res << " ";
   } 
// cach 2 : dung stack
for(int i = 0; i < n; i++){
    if(st.empty()){
        st.push(i);
    }
    else{
        while(!st.empty() && a[st.top() < a[i]]){
            b[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
   }
   while(!st.empty()){
    b[st.top()] = -1;
    st.pop();
   }
   for(int x : b){
    cout << x << " ";
   }
}
