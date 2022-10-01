class Solution {
public:
    void solve(TreeNode *root, vector<int>&v)
    {
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
            return;
        }
        solve(root->left, v);
        solve(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        solve(root1, v1);
        solve(root2, v2);
        int n = v1.size();
        if(n == v2.size())
        {
            for(int i= 0;i<n;i++)
            {
                if(v1[i] != v2[i])
                    return false;
            }
            return true;
        }
        return false;
        
    }
};