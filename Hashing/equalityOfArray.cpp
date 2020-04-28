#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	       }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    int i;
	    int flag =0;
	    for(i=0;i<n;i++){
	        if(a[i]!=b[i]){
	            flag =1;
	            break;
	        }
	    }
	    if(flag == 1){
	        cout<<0<<endl;
	    }
	    if(flag == 0){
	        cout<<1<<endl;
	    }

	}
	return 0;
}
