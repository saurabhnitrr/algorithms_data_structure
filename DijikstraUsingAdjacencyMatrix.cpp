
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The function prints V space separated integers where 
    the ith integer denote the shortest distance of ith vertex
    from source vertex */
    
int minDistance(int dist[],bool vis[],int V){
     int min=INT_MAX;
    int mini=0;
    for(int i=0;i<V;i++)
    {
        if(dist[i]<min&&vis[i]==false)
        {
            min=dist[i];
            mini=i;
        }
    }
    return mini;
    
}
void dijkstra(int graph[MAX][MAX], int s,int V)
{
    bool vis[V];
    int dist[V];
    for(int i=0;i<V;i++){
        vis[i]=false;
        dist[i] =INT_MAX;
    }
    dist[s] = 0;
    for(int count =0;count<V-1;count++){
        int u = minDistance(dist,vis,V);
        vis[u] = true;
        for (int v=0;v<V;v++){
            if(!vis[v] and graph[u][v] and dist[u]!= INT_MAX and dist[u]+graph[u][v]<dist[v]){
                dist[v] = dist[u]+graph[u][v];
            }
        }
    }
    for(int i=0;i<V;i++){
        cout<<dist[i]<<" ";
    }
   //Your code here
}
