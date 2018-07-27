void rotate(struct node **head_ref, int k)
{ node* a = *head_ref;
    node* head = *head_ref;
    while(a->next!=NULL){
        a = a->next;
    }
    a->next= head;
    for(int i= 1;i<k;i++){
        head = head->next;
    }
        *head_ref = head->next;
head->next =NULL;
  // Complete this method
}
