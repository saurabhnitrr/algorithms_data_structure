int Solution::lengthOfLastWord(const string A) {
    // int l = A.length();
    const char *s = A.c_str();
    // s = new char[l];
    // strcpy(s,A);
    int len =0;
    while(*s){
        if(*s++ !=' '){
            len++;
        }
        else if(*s and *s!=' '){
            len=0;
        }
    }
    return len;
    
}
