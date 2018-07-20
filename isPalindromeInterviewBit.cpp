int Solution::isPalindrome(string A) {
    int l =A.size();
    int i=0,j=l-1;
    while(i<j){
        while(i<j and !isalnum(A[i]))i++;
        while(i<j  and !isalnum(A[j]))j--;
        if(tolower(A[i])!=tolower(A[j])){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
