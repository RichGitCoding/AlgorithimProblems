/*
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Input: p = [1,2], q = [1,null,2]
Output: false

Input: p = [1,2,1], q = [1,1,2]
Output: false

Input: p = [1,2,3], q = [1,2,3]
Output: true
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    
   
    if(p == NULL && q == NULL)
    {
        return true;
    }
    if( (p == NULL && q !=NULL) || (p != NULL && q ==NULL))
    {
        
        return false;
    }
    else
    {
        
       bool i = p->val == q->val;
       bool j = isSameTree(p->left, q->left);
       bool k = isSameTree(p->right, q->right);
        
        
       if( i && j && k) 
       {
           return true;
       }
       return false;
        
    }
    
    
    
    
          
          
}