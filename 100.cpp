bool isSameTree(TreeNode* p, TreeNode* q) {
            if(p==NULL && q==NULL)
            {
                return 1;
            }

            if(p==NULL || q==NULL)
            {
                return 0;
            }
        
            return p->val == q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
            
            
        }
    
};