#include<iostream>
#include<map>
#include<queue>
// #include<stl>
using namespace std;


typedef struct Binary_tree{
    int data;
    struct Binary_tree * left;
    struct Binary_tree *right;
    int hd;
}node;

node* create_node(){
   node *newElement;
   newElement = ((node*)malloc(sizeof(node)));
   newElement->data;
   newElement->left=newElement->right=NULL;
   return newElement;
}

void topView(node * root)
{
    if( root ==NULL)
    {
        return;
    }

     queue<node*> q;
     map<int,int> m;
     int hd=0;
     root->hd=hd;
     q.push(root);
     
}