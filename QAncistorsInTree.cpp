
//1. Sum of ancestors used, find the number of paths having given sum
//
//
//


#include <bits/stdc++.h>
using namespace std;


// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////Algorithms
//////////////////////////Complexity here is O(n), if height funtion called seprately then it could have been O(n^2)////
class Solution{
    public:
    //Q1 Sum of ancestors used, find the number of paths having given sum
     void sumi(Node *root,int k,int &count,vector<int> path={})
    {
        if(root==NULL)
        return ;

        path.push_back(root->data);
        sumi(root->left,k,count,path);
        sumi(root->right,k,count,path);
        int sum=0;
        int i=path.size()-1;
        for(;i>=0;i--){
            sum+=path[i];
            if(sum==k)
                count++;
        }
        path.pop_back();
    }
    int sumK(Node *root,int k){
        int count=0;
        vector<int> path;
        sumi(root,k,count);
        return count;
    }

//Q2:Find Kth ancestor
  Node* Kst(Node* root,int &k,int node){
        if(root==NULL)
        return NULL;

        if(root->data==node)
        return root;

        Node* L=Kst(root->left, k, node);
        Node* R=Kst(root->right, k, node);

        if(L)
        {
            k--;
            //cout<<L->data<<" "<<root->data<<'\n';
            if(k<=0)
            {
                k=INT_MAX;
                return root;
            }
            else 
            return L;
        }        

        
        if(R)
        {
            k--;
           // cout<<R->data<<" "<<root->data<<'\n';
            if(k<=0)
            {
                k=INT_MAX;
                return root;
            }
            else 
            return R;
        }        

        
    }
    int kthAncestor(Node *root, int k, int node)
    {
        Node * R=Kst(root,k,node);
        return (R->data==node)?-1: R->data;
    }
    //Q3:
    pair<int,int> sumize(Node*root){
        if(root==NULL)
        return make_pair(0,0);
        pair<int,int> L=sumize(root->left);
        pair<int,int> R=sumize(root->right);
        return make_pair((root->data+L.second+R.second),(L.first,R.first));
    }
     int getMaxSum(Node *root) 
    {
        pair<int,int> R=sumize(root);
        return max(R.first,R.second);
        
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// { Driver Code Starts.

/* Driver program to test size function*/

int main()
{

    int t;
    scanf("%d ", &t);
    while (t--)
    {
        string s, ch;
        getline(cin, s);

        Node *root = buildTree(s);
        Solution ob;
        //cout << ob.verticalOrder(root)[0] << endl;
    }
    return 0;
}
  // } Driver Code Ends