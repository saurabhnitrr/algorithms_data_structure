int Solution::power(string A) {
    long long num =0;
    int l = A.length();
    if(l==1 and A[l-1]=='1'){
        return 0;
    }
    while(l!=1 or A[l-1]!='1'){
        if((A[l-1]-'0')%2==1){
            return 0;
        }
        int j=0;
        for(int i=0;i<l;i++){
            num = num*10+A[i]-'0';
            if(num<2){
                if(i!=0){
                    A[j++]= '0';
                }
                continue;
            }
            A[j++] = int(num/2) +'0';
            num = (num) -(num/2)*2;
            
        }
        l = j;
    }
    return 1;
}
