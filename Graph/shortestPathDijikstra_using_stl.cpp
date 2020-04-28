/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<bits/stdc++.h>
using namespace std;

#define SIZE  1000000+1
vector<pair<int,int>>adj[SIZE];

int dist[SIZE];
bool vis[SIZE] {false};


void dij(int u){
    dist[u] =0;
    multiset<pair<int,int>>s;
    s.insert({0,u});
    while(!s.empty()){
        pair<int ,int> p =*s.begin();
        s.erase(s.begin());
        int from,to,cost;
        from = p.second;
        if(vis[from]==true){
            continue;
        }
        else{
            vis[from] =true;
            for(int i=0;i<adj[from].size();i++){
                cost = adj[from][i].first;
                to = adj[from][i].second;
                if(dist[from]+cost<dist[to]){
                    dist[to] = dist[from]+cost;
                    s.insert({dist[to],to});
                }
            }
        }
        }
}    
    


int main(){
    int n,m;
    cin>>n>>m;
    int a,b,wt;
    for(int i=0;i<m;i++){
        cin>>a>>b>>wt;
        adj[a].push_back({wt,b});
        // adj[b].push_back({wt,a});
    }
    
for(int i=0;i<SIZE;i++){
    dist[i] =10000000000;
}
    dij(1);
    for(int i=2;i<=n;i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
    return 0;
}
