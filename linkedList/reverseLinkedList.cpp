Node* reverse(Node *head)
{
    Node* current,*prev,*next;
    current = head;
    prev =NULL;
    next =NULL;
    while(current!=NULL){
        next=current->next;
        current->next =prev;
        prev = current;
        current = next;
    }
    head =prev;
    return head;
  // Your code here
}
