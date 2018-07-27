Node *removeDuplicates(Node *root)
{
    Node *a =root;
    Node *prev = NULL;
    set<int> s;
    while(a!=NULL){
        if(s.count(a->data)!=0){
            prev->next = a->next;
        }
        
        else{
            s.insert(a->data);
            prev = a;
        }
        a =a->next;
    }
    return root;
 // your code goes here
}
