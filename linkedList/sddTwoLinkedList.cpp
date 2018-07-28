Node* newNode(int data){
Node* node = new Node;
node->data = data;
node->next = NULL;
return node;
}

Node*  addTwoLists(Node* first, Node* second){
  // Code here
  Node* res = NULL;
  Node *temp,*prev =NULL;
  int cy =0,sum;
  while(first!= NULL || second!=NULL){
      int x,y;
      if(first != NULL){
          x = first->data;
      }
      else{
          x=0;
      }
      if(second != NULL){
          y = second->data;
      }
      else{
          y=0;
      }
      sum = x+y+cy;
      if(sum>=10){
          cy =1;
      }
      else{
          cy =0;
      }
      sum =sum%10;
      temp =newNode(sum);
      if(res ==NULL){
          res = temp;
      }
      else{
          prev->next =temp;
      }
      prev = temp;
      if(first){
          first = first->next;
      }
      if(second){
          second = second->next;
      }
      
  }
  if(cy>0){
      temp->next = newNode(cy);
  }
  return res;
}
