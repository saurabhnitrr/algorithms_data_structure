#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
       int  l = str.length();
        bool chars[256] ={false};
        int flag = 0;
        for(int i=0;i<l;i++){
            if(chars[str[i]] == false){
                chars[str[i]]= true;
                    }
            else{
            cout<<str[i];
            flag =1;
            break;
            }
        }
        if(flag ==0){
            cout<<-1;
        }
    cout<<"\n";
    }
return 0;
}
