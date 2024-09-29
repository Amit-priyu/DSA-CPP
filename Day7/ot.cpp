
#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int N, int M, vector<int>requests) {
    priority_queue<pair<int , int>, vector<pair<int , int>>, greater<pair<int, int>>>pq;
    for (int i = 0; i < N; ++i) {
        pq.push({0, i}); 
    }
    
    vector<int> result;
    for (int i = 0; i < M; ++i) {
        pair<int, int> server = pq.top();
        pq.pop();
        result.push_back(server.second + 1);
        pq.push({server.first + requests[i], server.second});
    }

    return result;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0; i<2; i++) {
        int d; cin>>d;
        v.push_back(d);
    }
    vector<int> output=solve(n,m,v);
    for(int i=0; i<output.size(); i++) cout<<output[i]<<" ";
    return 0;
}