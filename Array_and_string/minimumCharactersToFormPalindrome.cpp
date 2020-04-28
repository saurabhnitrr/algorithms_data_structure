bool isPalindrome(string s){
    int l = s.size();
    for(int i=0,j=l-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}
int Solution::solve(string A) {
    int cnt=0;
    
    while(A.length()>0){
        if(isPalindrome(A)){
            break;
        }
        else{
            A.erase(A.begin()+A.length()-1);
            cnt++;
        }
    }
    return cnt;
}
