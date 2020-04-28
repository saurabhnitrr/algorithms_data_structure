#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        map<string,int> m;
        for(int i=0;i<n;i++){
            cin>>s;
            m[s]++;
        }
        int max =0;
        pair<string,int> result;
        for(auto it =m.begin();it!=m.end();it++){
            if(it->second > max){
                result = {it->first,it->second};
                max = it->second;
            }
        }
        cout<<result.first<<" "<<result.second<<endl;
    }
	//code
	return 0;
}
