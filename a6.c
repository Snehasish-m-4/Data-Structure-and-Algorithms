//BINARY TREE(using linked representation)


// #include<stdio.h>
// #include<stdlib.h>
// #include<malloc.h>
// typedef struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// } node;
// //preorder traversal
// void pre_order(node* root){
//     if(root!=NULL){
//         printf("%d\t",root->data);
//         pre_order(root->left);
//         pre_order(root->right);
//     }
// }
// //postorder traversal
// void post_order(node* root){
//     if(root!=NULL){
//         post_order(root->left);
//         post_order(root->right);
//         printf("%d\t",root->data);
//     }
// }
// //inorder traversal
// void in_order(node* root){
//     if(root!=NULL){
//         in_order(root->left);
//         printf("%d\t",root->data);
//         in_order(root->right);
//     }
// }
// int main(){
//     node* root = (node*)malloc(sizeof(node));
//     node *p1 = (node*)malloc(sizeof(node));
//     node *p2 = (node*)malloc(sizeof(node));
//     node *p3 = (node*)malloc(sizeof(node));
//     node* p4 = (node*)malloc(sizeof(node));
//     root->data = 7;
//     p1->data = 4;
//     p2->data = 3;
//     p3->data = 6;
//     p4->data = 9;
//     root->left = p1;
//     root->right = p4;
//     p1->left = p2;
//     p1->right = p3;
//     p2->left = NULL;
//     p2->right = NULL;
//     p3->left = NULL;
//     p3->right = NULL;
//     p4->left = NULL;
//     p4->right = NULL;
//     printf("The binary tree is:\n");
//     pre_order(root);
//     printf("\n");
//     printf("The binary tree is:\n");
//     post_order(root);
//     printf("\n");
//     printf("The binary tree is:\n");
//     in_order(root);
//     return 0;
// } 


//BINARY SEARCH TREE


// #include<stdio.h>
// #include<stdlib.h>
// #include<malloc.h>
// typedef struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// } node;
// node* createnode(int data){
//     node* ptr;
//     ptr = (node*)malloc(sizeof(node));
//     ptr->data = data;
//     ptr->left = NULL;
//     ptr->right = NULL;
//     return ptr;
// }
// node* insert(node* root,int data){
//     if(root == NULL){
//         return createnode(data);
//     }
//     else if(data < root->data){
//         root->left = insert(root->left,data);
//     }
//     else{
//         root->right = insert(root->right,data);
//     }
// }
// //inorder traversal
// void in_order(node* root){
//     if(root!=NULL){
//         in_order(root->left);
//         printf("%d\t",root->data);
//         in_order(root->right);
//     }
// }
// int main(){
//     node* root = NULL;
//     root = insert(root,7);
//     root = insert(root,3);
//     root = insert(root,4);
//     root = insert(root,9);
//     root = insert(root,11);
//     root = insert(root,2);
//     root = insert(root,1);
//     root = insert(root,6);
//     root = insert(root,15);
//     root = insert(root,13);
//     printf("The binary tree is:\n");
//     in_order(root);
//     return 0;
// }


//searching element in binary search tree


// #include<stdio.h>
// #include<stdlib.h>
// #include<malloc.h>
// typedef struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// } node;
// node* createnode(int data){
//     node* ptr;
//     ptr = (node*)malloc(sizeof(node));
//     ptr->data = data;
//     ptr->left = NULL;
//     ptr->right = NULL;
//     return ptr;
// }
// node* insert(node* root,int data){
//     if(root == NULL){
//         return createnode(data);
//     }
//     else if(data < root->data){
//         root->left = insert(root->left,data);
//     }
//     else{
//         root->right = insert(root->right,data);
//     }
// }
// node* binary_search(node *root,int key){
//     if(root == NULL){
//         return NULL;
//     }
//     else if(root->data == key){
//         return root;
//     }
//     else if(root->data<key){
//         binary_search(root->right,key);
//     }
//     else{
//         binary_search(root->left,key);
//     }
// }
// node* iterative_search(node* root,int key){
//     while(root != NULL){
//         if(root->data == key){
//             return root;
//         }
//         else if(root->data<key){
//             root = root->right;
//         }
//         else{
//             root = root->left;
//         }
//     }
//     return NULL;
// }
// int main(){
//     node* root = NULL;
//     root = insert(root,7);
//     root = insert(root,3);
//     root = insert(root,4);
//     root = insert(root,9);
//     root = insert(root,11);
//     root = insert(root,2);
//     root = insert(root,1);
//     root = insert(root,6);
//     root = insert(root,15);
//     root = insert(root,13);
//     int key;
//     printf("Enter the number to search:");
//     scanf("%d",&key);
//     //node* n = binary_search(root,key);
//     node* n = iterative_search(root,key);
//     if(n != NULL){
//         printf("The element is present in the bineary tree.\n");
//     }
//     else{
//         printf("The element is not present in the bineary tree.\n");
//     }
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
//         return NULL;
//     }
//     if(root->left==NULL && root->right==NULL){
//          free(root);
//          return NULL;
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
//     root=root->left;
//     while(root->right!=NULL){
//         root=root->right;
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


//AVL TREE(insertion and rotation)


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int data;
//     struct node* left;
//     struct node* right;
//     int height;
// }node;
// int getheight(node* n){
//     if(n==NULL){
//         return 0;
//     }
//     return n->height;
// }
// node* create(int key){
//     node* new=(node*)malloc(sizeof(node));
//     new->data=key;
//     new->left=NULL;
//     new->right=NULL;
//     new->height=1;
//     return new;
// }
// int getbalencefactor(node* n){
//     if(n==NULL){
//         return 0;
//     }
//     return getheight(n->left) - getheight(n->right);
// }
// int max(int a,int b){
//     return (a>b)?a:b;
// }
// node* rightrotation(node* y){
//     node* x=y->left;
//     node* t2=x->right;
//     x->right=y;
//     y->left=t2;
//     x->height=1+max(getheight(x->left),getheight(x->right));
//     y->height=1+max(getheight(y->left),getheight(y->right));
//     return x;
// }
// node* leftrotation(node* x){
//     node* y=x->right;
//     node* t2=y->left;
//     y->left=x;
//     x->right=t2;
//     y->height=1+max(getheight(y->left),getheight(y->right));
//     x->height=1+max(getheight(x->left),getheight(x->right));
//     return y;
// }
// node* insert(node* n,int key){
//     if(n==NULL){
//         return create(key);
//     }
//     else if(key<n->data){
//         n->left=insert(n->left,key);
//     }
//     else if(key>n->data){
//         n->right=insert(n->right,key);
//     }
//     n->height=1+max(getheight(n->left),getheight(n->right));
//     int bf=getbalencefactor(n);

//     //LL rotation
//     if(bf>1 && key<n->left->data){
//         return rightrotation(n);
//     }

//     //RR rotation
//     if(bf<-1 && key>n->right->data){
//         return leftrotation(n);
//     }

//     //LR rotation
//     if(bf>1 && key>n->left->data){
//         n->left=leftrotation(n->left);
//         return rightrotation(n);
//     }

//     //RL rotation
//     if(bf<-1 && key<n->right->data){
//         n->right=rightrotation(n->right);
//         return leftrotation(n);
//     }

//     return n;
// }
// void inorder_traversal(node* root){
//     if(root!=NULL){
//         inorder_traversal(root->left);
//         printf("%d\t",root->data);
//         inorder_traversal(root->right);
//     }
// }
// void preorder_traversal(node* root){
//     if(root!=NULL){
//         printf("%d\t",root->data);
//         preorder_traversal(root->left);
//         preorder_traversal(root->right);
//     }
// }
// int main(){
//     node* root=NULL;
//     root = insert(root, 1);
//     root = insert(root, 2);
//     root = insert(root, 4);
//     root = insert(root, 5);
//     root = insert(root, 6);
//     root = insert(root, 3);
//     inorder_traversal(root);
//     printf("\n");
//     preorder_traversal(root);
//     return 0;
// }





//Graph

//Adjacency Matrix representation of an undirected graph using an 2D-array


// #include<stdio.h>
// int main(){
//     int m;
//     printf("Enter the number of vertex:");
//     scanf("%d",&m);
//     int arr[m][m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             arr[i][j]=0;
//         }
//     }
//     arr[0][1]=1;
//     arr[1][0]=1;
//     arr[0][4]=1;
//     arr[4][0]=1;
//     arr[1][2]=1;
//     arr[2][1]=1;
//     arr[3][2]=1;
//     arr[2][3]=1;
//     arr[1][4]=1;
//     arr[4][1]=1;
//     arr[3][4]=1;
//     arr[4][3]=1;
//     printf("Adjacency matrix is:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//BFS graph traversal 


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct queue{
//     int size;
//     int f;
//     int r;
//     int* arr;
// } queue;
// int isFull(queue *q){
//     if(q->r == (q->size)-1){
//         return 1;
//     }
//     return 0;
// }
// int isEmpty(queue *q){
//     if(q->f == q->r){
//         return 1;
//     }
//     return 0;
// }
// void enqueue(queue* q,int data){
//     if(isFull(q)){
//         printf("The queue is full.\n");
//     }
//     q->r++;
//     q->arr[q->r] = data;
// }
// int dequeue(queue* q){
//     int val = -1;
//     if(isEmpty(q)){
//         printf("The queue is empty.\n");
//     }
//     else{
//         q->f++;
//         val = q->arr[q->f];
//     }
//     return val;   
// }
// int main(){
//     queue q;
//     q.size = 10;
//     q.f = q.r = -1;
//     q.arr = (int*)malloc(q.size*(sizeof(int)));  
//     //BFS implementation
//     int u;
//     int i=0;
//     int visited[7]={0,0,0,0,0,0,0};
//     int a[7][7]={{0,1,1,1,0,0,0},
//                  {1,0,1,0,0,0,0},
//                  {1,1,0,1,1,0,0},
//                  {1,0,1,0,1,0,0},
//                  {0,0,1,1,0,1,1},
//                  {0,0,0,0,1,0,0},
//                  {0,0,0,0,1,0,0}};               
//     printf("starting from: %d\n",i);
//     visited[i]=1;
//     enqueue(&q,i); //For exploring i
//     while (!isEmpty(&q)){
//        int u=dequeue(&q);
//        for(int j=0;j<7;j++){
//            if(a[u][j]==1 && visited[j]==0){
//             printf("Visited:%d\n",j);
//             visited[j]=1;
//             enqueue(&q,j);
//            }
//        }
//     }
//     return 0;
// }



//DFS graph traversal


// #include<stdio.h>
// //Making global variable so that i can access it from any where
// int visited[7]={0,0,0,0,0,0,0};
// int a[7][7]={{0,1,0,0,0,1,0},
//              {1,0,1,0,0,0,1},
//              {0,1,0,1,0,0,0},
//              {0,0,1,0,1,0,1},
//              {0,0,0,1,0,1,1},
//              {1,0,0,0,1,0,0},
//              {0,1,0,1,1,0,0}};
// void DFS(int i){
//     printf("visiting vertex:%d\n",i);
//     visited[i]=1;
//     for(int j=0;j<7;j++){
//         if(a[i][j]==1 && !visited[j]){
//             DFS(j);
//         }
//     }
// }
// int main(){
//     //DFS implementation
//     int x;
//     printf("Enter the starting vertax:");
//     scanf("%d",&x);
//     DFS(x);
//     return 0;
// }

