#include<iostream> 

typedef int valueType;

using namespace std;  

#define COUNT 3  
  
class TreeNode  
{  
    public: 
    int val;  
    TreeNode* left, *right;  
      
    
    TreeNode(int val){ 
        this->val = val; 
        this->left = NULL; 
        this->right = NULL; 
    } 
};  
  

void printbst(TreeNode *root, int space)  
{  
    if (root == NULL)  
        return;  
  
    space += COUNT;  

    printbst(root->right, space);  
  
    cout<<endl;  

    for (int i = COUNT; i < space; i++)  
        cout<<".";  

    cout<< "*" <<" "<< root->val<<"\n";  
  
    printbst(root->left, space);  
}  
  
void print_2d_bst(TreeNode *root)  
{  
    printbst(root, 0);  
}  

void insert(TreeNode*& r, valueType x)
{
  if(!r) {
    r = new TreeNode(x);
  } else if(x < r->val) {
    
insert(r->left,x);

  } else if(x > r->val) {
    
insert(r->right,x);

  }
}

int main()  
{   TreeNode* root = 0;
    int n;
    cin >> n;
    for(int i=0;i < n;i++){
        int num;
        cin >> num;
    insert(root,num);
    }
    print_2d_bst(root);  
    return 0;  
}  
  
