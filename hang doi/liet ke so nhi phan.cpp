#include <bits/stdc++.h>
#include<queue>
using namespace std;

vector<string> res;
void init(){
    queue<string> q;
    q.push("1");
    res.push_back("1");
    while(res.size() < 10000){ // ta doi 10k so dau sang nhi
        // lay phan tu o dau hang doi
        string top = q.front();
        q.pop();
        res.push_back(top + "0");// luu vao vector
        res.push_back(top + "1");
        q.push(top + "0");// cap nhat so moi vao queue
        q.push(top + "1");
    }

}
int main(){
   init();
   int t; cin >> t; // so test key
   while(t--){
    int n; cin >> n; // nhap n voi output in ra nhi phan tu 1 den n
    for(int i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    cout << endl;

   }
}
