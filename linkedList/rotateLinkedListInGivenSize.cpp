struct node *reverse (struct node *head, int k)
{ 
    struct node *current = head;
    struct node *next =NULL;
    struct node *previous = NULL;
    int count =0;
    
    while(count< k && current!= NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
        count++;
    }
    if(next != NULL){
        head->next = reverse(next,k);
    }
    return previous;
  // Complete this method
}
