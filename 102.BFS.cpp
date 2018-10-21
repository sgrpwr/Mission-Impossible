#include <bits/stdc++.h>
using namespace std;
void levelOrder(struct Node* node);
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
void levelOrder(struct Node* node);
void inOrder(struct Node* node)
{
  if (node == NULL)
    return;
  inOrder(node->left);
  printf("%d ", node->data);
  inOrder(node->right);
}
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)
                       malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *node = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (node == NULL)
             node = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     levelOrder(node);
     cout << endl;
  }
  return 0;
}

}

//Main algo...
void levelOrder(Node* node)
{
  //Your code here
  if(node==NULL) return;
  queue <Node*>Que; 
  Que.push(node);
  while(Que.empty()==false){
      int size = Que.size();
      while(size>0){
          Node *temp = Que.front();
          cout<<temp->data<<" ";
          Que.pop();
          if(temp->left!=NULL) Que.push(temp->left);
          if(temp->right!=NULL) Que.push(temp->right);
          size--;
      }
  }
}
