bool isPalindrome(ListNode* head){
  ListNode* fp = head;
  ListNode* sp =head;
  int count =0;
  while(fp != NULL && fp->next != NULL && sp->next != NULL){
  fp = fp->next->next;
  sp = sp->next;
  count++;
  }
  ListNode* current = sp;
  ListNode* next = NULL;
  ListNode* previous = NULL;
  while(current != NULL){
    next = current-.next;
    current  = previous;
    previous = current;
    current = next;
  }
  sp = previous;
  ListNode* check = sp;
  int i=0;
  while(i<count){
  if(check->data != sp->data){
  return false;}
  i++;
  check= check->next;
  sp = sp->next;
  }
  return true;
  }
