class Solution {
public:
    int binaryGap(int n) {
        bitset<32> b(n);
        int num = b.count();
        if(num<=1){
            return 0;
        }
        int count;
        vector<int> v;
        for(int i=0;i<32;i++){
            if(b.test(i)){
                count =1;
                for(int j=i+1;j<32;j++){
                    if(b.test(j)){
                        v.push_back(count);
                        break;
                    }
                    count++;
                }
            }   
        }
        int k = *max_element(v.begin(),v.end());
        return k;
        
    }
};
