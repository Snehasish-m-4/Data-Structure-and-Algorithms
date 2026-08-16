// Implementation of double ended queue(DEqueue) using doubly linked list

// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
//     struct node* pre;
// } node;
// typedef struct queue{
//     struct queue* f;
//     struct queue* r;
// } queue;
// void enqueue_R(queue* f,queue* r, int data){
//     node* new = (node*)malloc(sizeof(node));
//     if(new = NULL){
//         printf("Insertion not be done.\n");
//     }
//     else{
//         new->data = data;
//         new->next = NULL;
//         if(f == NULL||r == NULL){
//             f=r=new;
//             new->pre = NULL;
//         }
//         else{
//             r->next = new;
//             new->pre = r;
//             r = new;
//         }
//     }
// }
// void enqueue_F(queue* f,queue* r, int data){
//     queue* new = (queue*)malloc(sizeof(queue));
//     if(new = NULL){
//         printf("Insertion not be done.\n");
//     }
//     else{
//         new->data = data;
//         if(f == NULL||r == NULL){
//             f=r=new;
//             new->next = NULL;
//             new->pre = NULL;
//         }
//         else{
//             new->next = f;
//             f->pre = new;
//             new->pre = NULL;
//             f = new;
//         }
//     }
// }
// int dequeue_F(queue* f,queue* r){
//     if(f == NULL || r == NULL){
//         printf("Queue is empty.\n");
//     }
//     queue* ptr = f;
//     int val = ptr->data;
//     f = f->next;
//     free(ptr);
//     return val;
// }
// int dequeue_R(queue* f,queue* r){
//     if(f == NULL || r == NULL){
//         printf("Queue is empty.\n");
//     }
//     queue* ptr = r;
//     r = r->pre;
//     int val = ptr->data;
//     free(ptr);
//     return val;
// }
// void traverse(queue* ptr){
//     if( ptr == NULL){
//         printf("Queue is empty.\n");
//     }
//     printf("Queue is:\n");
//     while(ptr->next != NULL){
//         printf("%d\t",ptr->data);
//         ptr = ptr->next;
//     }
// }
// int main(){
//     enqueue_R(f,r,1);
//     enqueue_F(f,r,1);
//     enqueue_R(f,r,1);
//     traverse(f);
//     return 0;
// } 


//INSERTION AND DELETION IN BINEARY SEARCH TREE


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int data;
//     struct node* left;
//     struct node* right; 
// } node;
// node* create_node(int data){
//     node* ptr = (node*)malloc(sizeof(node));
//     ptr->data = data;
//     ptr->left = NULL;
//     ptr->right = NULL;
//     return ptr;
// }
// node* insert(node* root,int data){
//     if(root == NULL){
//         return create_node(data);
//     }
//     else if(data<root->data){
//         root->left = insert(root->left,data);
//     }
//     else{
//         root->right = insert(root->right,data);
//     }
// }
// node *delete(node* root,int value ){
//     if(root == NULL){
//         return root;
//     }
//     else if(value<root->data){
//         root->left = delete(root->left,value);
//     }
//     else if(value>root->data){
//         root->right = delete(root->right,value);
//     }
//     else{
//         if(root->left==NULL){
//             node* temp = root->right;
//             free(root);
//             return temp;
//         }
//         else if(root->right == NULL){
//             node* temp = root->left;
//             free(root);
//             return temp;
//         }
//         node* temp = findmin(root->right);
//         root->data = temp->data;
//         root->right = delete(root->right,temp->data);
//     }
//     return root;
// }
// node* findmin(node* root){
//     while(root->left!=NULL){
//         root=root->left;
//     }
//     return root;
// }
// void traversal(node* root){
//     if(root!=NULL){
//         traversal(root->left);
//         printf("%d\t",root->data);
//         traversal(root->right);
//     }
// }
// int main(){
//     node* root = NULL;
//     root = insert(root,5);
//     root = insert(root,4);
//     root = insert(root,6);
//     root = insert(root,3);
//     root = insert(root,7);
//     traversal(root);
//     delete(root,4);
//     printf("\n");
//     traversal(root);
//     return 0;
// }