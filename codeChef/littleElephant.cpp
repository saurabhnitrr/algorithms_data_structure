#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag =1;
        for(int i =0;i<n;i++){
            if(c >= a[i]){
                c = c - a[i];
            }
            else{
                flag = 0;
                break;
            }    
        }
        if(flag == 1){
            cout<<"Yes"<<endl;
        }
        if(flag ==0){
            cout<<"No"<<endl;
        }
    }
	// your code goes here
	return 0;
}
