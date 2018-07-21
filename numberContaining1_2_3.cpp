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
        int rem=0;
        vector<int>v;
        int temp;
        bool flag=0;
        for(int i=0;i<n;i++){
            temp = a[i];
            flag=0;
            while(temp>0){
                rem = temp%10;
                if(rem!=1 and rem!=2 and rem!=3){
                    flag=1;
                    break;
                }
                temp =temp/10;
            }
            if(!flag){
                v.push_back(a[i]);
            }
        }
        if(v.size()==0){
            cout<<-1<<endl;
        }
        else{
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }
        
    }
	//code
	return 0;
}
