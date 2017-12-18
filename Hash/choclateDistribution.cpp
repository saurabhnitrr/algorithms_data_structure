#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m;
        cin>>m;
        sort(a,a+n);
        int b[n-(m-1)];
        int j=0;
        int k=0;
        for(int i=m-1;i<n;i++){
            b[k] = a[i]-a[j];
            k++;
            j++;
        }
        sort(b,b+(n-(m-1)));
        cout<<b[0]<<endl;
    }
	return 0;
}
