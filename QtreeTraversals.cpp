
//1.Vertical traversal
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
    //Q1: Function to VERTICAL TRAVERSAL
     map<int,vector<int>> M;
    void LOL(Node* root, int i )
    {
        queue<pair<Node*,int>> Q;
        Q.push(make_pair(root, 0));

        while (!Q.empty())
        {
            Node *Temp = Q.front().first;
            int dist = Q.front().second;
            Q.pop();
            M[dist].push_back(Temp->data);
            
            if (Temp->left)
            {
                Q.push(make_pair(Temp->left, dist - 1));
            }
            if (Temp->right)
            {
                Q.push(make_pair(Temp->right, dist + 1));
            }
        }
    }
    vector<int> verticalOrder(Node *root)
    {
        LOL(root,0);
        vector<int> R;
        for(auto i:M)
        {
            for(auto j:i.second)
            R.push_back(j);
        }
        return R;
    }

    //Q2
     vector<int> topView(Node *root)
    {
        map<int, int> A;
        vector<int> R;
        queue<pair<int,Node*>> Q;
        Q.push(make_pair(0,root));
        while(!Q.empty()){
            Node* temp=Q.front().second;
            int ind=Q.front().first;
            Q.pop();
            if(A.find(ind)==A.end())
            A[ind]=temp->data;
            if(temp->left)
            Q.push(make_pair(ind-1,temp->left));
            if(temp->right)
            Q.push(make_pair(ind+1,temp->right));
        }

        for(auto i:A){
            R.push_back(i.second);
        }
        return R;
        // Your code here
    }
    // Q3
    vector<int> leftView(Node *root)
    {
        vector<int> R;
        queue<Node*> Q;
        Q.push(root);
        Q.push(NULL);
        while(!Q.empty()){
            Node* temp=Q.front();
            Q.pop();
            if(temp==NULL){
                if(!Q.empty()){
                R.push_back(Q.front()->data);
                Q.push(NULL);
                }
            }
            else{
            if(temp->left)
            {
                Q.push(temp->left);
            }
            if(temp->right)
            {
                Q.push(temp->right);
            }
            }
            
        }
        return R;
    }
    // Q4
    vector<int> diagonal(Node *root)
    {
        map<int,map<int,vector<int>>> M;
        queue<pair<pair<int,int>,Node*>> Q;
        Q.push(make_pair(make_pair(0,0),root));

        while (!Q.empty())
        {
         Node* temp=Q.front().second;
         int dist=Q.front().first.first;
         int lvl=Q.front().first.second;
         Q.pop();
         M[dist][lvl].push_back(temp->data);
         if(temp->left){
            Q.push(make_pair(make_pair(dist-1,lvl+1),temp->left));
         }   
         if(temp->right){
            Q.push(make_pair(make_pair(dist+1,lvl+1),temp->right));
         }   
        }
        
    }

    //Q5
    pair<int,int> longestSum(Node*root, int &sum,int &lvl)
    {
        if(root==NULL){
            return make_pair(sum,lvl);
        }
        sum+=root->data;
        pair<int,int> L=longestSum(root->left,sum,++lvl);
        pair<int,int> R=longestSum(root->right,sum,++lvl);
        if(L.second>R.second)
        {
            return L;
        }
        else if(L.second==R.second){
            if(L.first>R.first)
            return L;
            else return R;
        }
        else{
            return R;
        }
        
    }
    int sumOfLongRootToLeafPath(Node *root)
    {

        int sum=0,lvl=0;
       return longestSum(root,sum,lvl).first;
    }
    //Q6LCA
     Node* lca(Node* root ,int n1 ,int n2 )
    {
        //base case
        if(root==NULL)
        return NULL;
        //found case
        if(root->data==n1)
        return root;
        if(root->data==n2)
        return root;
        //recieved case
        Node* L=lca(root->left,n1,n2);
        Node* R=lca(root->right,n1,n2);
        
        if(L && R)
        return root;
        if(L)
        return L;
        if(R)
        return R;
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
        cout << ob.verticalOrder(root)[0] << endl;
    }
    return 0;
}
  // } Driver Code Ends