void mirror(Node* node) 
{
    if(node != NULL){
        mirror(node->left);
        mirror(node->right);
        Node *temp;
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
     // Your Code Here
}
