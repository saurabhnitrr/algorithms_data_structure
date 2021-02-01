
Class TreeNode
{
  public:
    int val;
    vector<TreeNode* > children;
    TreeNode(){}
    TreeNode(int _val)
    {
        Val = _val
    }
    TreeNode(int _val, vector<TreeNode*> _child)
    {
                   val = _val;
         children = _child;
    }
}

vector<vector<int>> GatherNAryTree(TreeNode* root)
{
    vector<vector<int>> res;
    if(!root)
   	{
	    return res;
    }
    queue<TreeNode* > q;
    vector<int> temp;
    q.push(root);
    temp.push_back(root->val);
    while(!q.empty())
    {
        int  s = q.size();
        res.push_back(temp);
        temp.clear();
        for(int i=0; i< s; i++)
        {
          auto node = q.front();
          q.pop();
          for(int j=0;j<node->children.size();j++)
          {
            q.push(node->children[j]);
            temp.push_back(node->children[j]->val);
          }
        }
    }
    
    return res;
}
