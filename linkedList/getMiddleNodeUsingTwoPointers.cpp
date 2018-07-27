int getMiddle(Node *head)
{
    if(head==NULL){
        return 0;
    }
    Node* fp =head;
    Node* sp = head;
    while(fp != NULL and fp->next != NULL ){ //this pattern is important mind it  
        
       sp = sp->next;
        fp = fp->next->next;
        }
        int x =sp->data;
        return x;
   // Your code here
}
