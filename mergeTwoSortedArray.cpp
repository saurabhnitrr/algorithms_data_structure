bool check(int a,int b){
    if(a>b){
        return true;
    }
    return false;
}
void Solution::merge(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int m =B.size();
    int i=0,j=0;
    // vector<int>v;
    while(i<A.size() and j<B.size()){
        bool a = check(A[i],B[j]);
        if(a){
            A.insert(A.begin()+i,B[j]);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    while(j!=B.size()){
        A.push_back(B[j]);
        j++;
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
