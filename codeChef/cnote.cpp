#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long int x,y,k,n;
        cin>>x>>y>>k>>n;
        int dif = x-y;
        int p[n],c[n];
        int flag = 0;
        for(int i=0;i<n;i++){
             cin>>p[i]>>c[i];
        }
        for(int i = 0;i<n;i++){
            if((p[i]>=dif)&&(c[i]<=k)){
                flag =1;
                break;
            }
        }
        if(flag == 1){
            cout<<"LuckyChef"<<endl;
        }
        if(flag == 0){
            cout<<"UnluckyChef"<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
