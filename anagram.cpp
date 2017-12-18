#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        string str1;
        cin>>str;
        cin>>str1;
        int a[256] = {0};
        int b[256] = {0};
        int l = str.length();
        int k = str1.length();
        for(int i = 0;i<l;i++){
            a[str[i]]++;
        }
        for(int j =0;j<k;j++){
            b[str1[j]]++;
        }
        int flag =1;
        for(int i=0;i<256;i++){
            if(a[i]==b[i]){
                continue;
            }
            else{
                flag =0;
                break;
            }
        }
        if(flag ==1){
            cout<<"YES"<<endl;
        }
        if(flag ==0){
            cout<<"NO"<<endl;
        }
    }
	//code
	return 0;
}
