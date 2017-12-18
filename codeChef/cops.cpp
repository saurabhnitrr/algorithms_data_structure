#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int m,x,y;
        cin>>m>>x>>y;
        int b[m];
        int k = x*y;
        int c,d;
        int a[100]={0};
        for(int i=0;i<m;i++){
         cin>>b[i];
         int c = max(b[i]-k-1,0);
         int d = min(99,b[i]+k-1);
         for(int j =c;j<=d;j++){
             a[j] = 1;
         }
        }
        int count = 0;
        for(int i=0;i<=99;i++){
            if(a[i]==0){
                count++;
            }
        }
        cout<<count<<endl;
        
        
    }
	// your code goes here
	return 0;
}
