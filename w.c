#include<stdio.h>
#include<stdlib.h>
struct node{
      int data;
      struct node*left;
      struct node*right;
};
struct node* s(int val){
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
return n;
}
void preorder(struct node *root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d  ",root->data);
    inorder(root->right);
}
void postorder(struct node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t ",root->data);
}
struct node *inordersuccer(struct node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
struct node*delete1(struct node*root,int val){
    if(root->data>val){
        root->left=delete1(root->left,val);
    }
    else if(root->data<val){
        root->right=delete1(root->right,val);
    }
    else{
        if(root->left==NULL&&root->right==NULL){
            struct node* todelete=root;
            free(todelete);
            return NULL;

        }
        if(root->right==NULL){
            return root->left;
        }
        else if(root->left==NULL){
            return root->right;
        }
        else{
            struct node*is=inordersuccer(root->right);
            root->data=is->data;
            root->right=delete1(root->right,val);
        }
    }
    return root;
}
int main(){
    struct node *root,*node1,*node2,*node3,*node4,*node5,*node6;
    root=s(20);
    node1=s(10);
    node2=s(5);
    node3=s(2);
    node4=s(25);
    node5=s(30);
    node6=s(35);
    root->left=node2;
    node2->left=node3;
    node2->right=node1;
    root->right=node5;
    node5->left=node4;
    node5->right=node6;
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    return 0;
}