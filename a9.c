// //linked list


// //creation and display

// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// } node;
// //display function
// void display_linkedlist(node *ptr){
//     if(ptr==NULL){
//         return;
//     }
//     while(ptr != NULL){
//         printf("Element:%d\n",ptr->data);
//         ptr=ptr->next;
//     }
// }
// int main(){
//     node* head=(node*)malloc(sizeof(node));
//     node* second=(node*)malloc(sizeof(node));
//     node* third=(node*)malloc(sizeof(node));
//     node* fourth=(node*)malloc(sizeof(node));
//     node* fifth=(node*)malloc(sizeof(node));
//     head->data=1;
//     head->next=second;
//     second->data=2;
//     second->next=third;
//     third->data=3;
//     third->next=fourth;
//     fourth->data=4;
//     fourth->next=fifth;
//     fifth->data=5;
//     fifth->next=NULL;
//     display_linkedlist(head);
//     return 0;
// }


// // insertions(at beginning,at between,at end,after a node)

// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// } node;
// //display function
// void display_linkedlist(node *ptr){
//     if(ptr==NULL){
//         return;
//     }
//     while(ptr != NULL){
//         printf("Element:%d\n",ptr->data);
//         ptr=ptr->next;
//     }
// }
// node* insert_at_beginning(node* head,int data){
//     node* ptr = (node*)malloc(sizeof(node));
//     ptr->next=head;
//     ptr->data=data;
//     return ptr;
// }
// node* insert_at_index(node*  head,int data,int index){
//     node* ptr = (node*)malloc(sizeof(node));
//     node* p = head;
//     int i=0;
//     while(i != index){
//         p=p->next;
//         i++;
//     }
//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;
//     return head;
// }
// node* insert_at_end(node* head,int data){
//     node* ptr = (node*)malloc(sizeof(node));
//     node* p = head;
//     ptr->data=data;
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=ptr;
//     ptr->next=NULL;
//     return head;
// }
// node* insert_after_node(node* head,node* pre_node,int data){
//     node* ptr = (node*)malloc(sizeof(node));
//     ptr->data=data;
//     ptr->next=pre_node->next;
//     pre_node->next=ptr;
//     return head;
// }
// int main(){
//     node* head=(node*)malloc(sizeof(node));
//     node* second=(node*)malloc(sizeof(node));
//     node* third=(node*)malloc(sizeof(node));
//     node* fourth=(node*)malloc(sizeof(node));
//     node* fifth=(node*)malloc(sizeof(node));
//     head->data=1;
//     head->next=second;
//     second->data=2;
//     second->next=third;
//     third->data=3;
//     third->next=fourth;
//     fourth->data=4;
//     fourth->next=fifth;
//     fifth->data=5;
//     fifth->next=NULL;
//     printf("Linked list before insertion:\n");
//     display_linkedlist(head);
//     //head = insert_at_beginning(head,9);
//     //head=insert_at_index(head,7,2);
//     //head=insert_at_end(head,8);
//     head=insert_after_node(head,third,11);
//     printf("Linked list after insertion:\n");
//     display_linkedlist(head);
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// } node;
// node* create_node(int data){
//     node* n=(node*)malloc(sizeof(node));
//     n->data=data;
//     n->next=NULL;
//     return n;
// }
// node* insert(node* head,int data){
//     node* new=(node*)malloc(sizeof(node));
//     if(head==NULL){
//         return create_node(data);
//     }
//     node* q=head;
//     while(q->next!=NULL){
//         q=q->next;
//     }
//     new->data=data;
//     q->next=new;
//     new->next=NULL;
//     return head;
// }
// void traversal(node* head){
//     printf("The linked listv is:\n");
//     while(head!=NULL){
//         printf("%d\t",head->data);
//         head=head->next;
//     }
// }
// int main(){
//     node* head=NULL;
//     head=insert(head,1);
//     head=insert(head,2);
//     head=insert(head,3);
//     head=insert(head,4);
//     head=insert(head,5);
//     head=insert(head,6);
//     traversal(head);
//     return 0;
// }


// //Deletion(at head,at index,at end)

// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// } node;
// void display_linkedlist(node* ptr){
//     if(ptr == NULL){
//          return;
//     }
//     while(ptr != NULL){
//         printf("element:%d\n",ptr->data);
//         ptr=ptr->next;
//     }
// }
// node* delete_at_head(node* head){
//     if(head == NULL){
//         return;
//     }
//     node* ptr=(node*)malloc(sizeof(node));
//     ptr=head;
//     head=head->next;
//     free(ptr);
//     return head;
// }
// node* delete_at_index(node* head,int index){
//     if(head == NULL){
//         return;
//     }
//     node* p=(node*)malloc(sizeof(node));
//     node* q=(node*)malloc(sizeof(node));
//     p=head;
//     q=head->next;
//     int i = 0;
//     while(i!=index-1){
//         p=p->next;
//         q=q->next;
//         i++;
//     }
//     p->next=q->next;
//     free(q);
//     return head;
// }
// node* delete_at_the_end(node* head){
//     if(head == NULL){
//         return;
//     }
//     node* p=(node*)malloc(sizeof(node));
//     node* q=(node*)malloc(sizeof(node));
//     p=head;
//     q=head->next;
//     while(q->next!=NULL){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=NULL;
//     free(q);
//     return head;
// }
// node* delete_at_the_key(node* head,int key){
//     if(head == NULL){
//         return;
//     }
//     node* p=(node*)malloc(sizeof(node));
//     node* q=(node*)malloc(sizeof(node));
//     p=head;
//     q=head->next;
//     while(key==q->data && q->next!=NULL){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     free(q);
//     return head;
// }
// int main(){
//     node* head=(node*)malloc(sizeof(node));
//     node* second=(node*)malloc(sizeof(node));
//     node* third=(node*)malloc(sizeof(node));
//     node* fourth=(node*)malloc(sizeof(node));
//     node* fifth=(node*)malloc(sizeof(node));
//     head->data=1;
//     head->next=second;
//     second->data=2;
//     second->next=third;
//     third->data=3;
//     third->next=fourth;
//     fourth->data=4;
//     fourth->next=fifth;
//     fifth->data=5;
//     fifth->next=NULL;   
//     printf("Linked list before deletion:\n");
//     display_linkedlist(head);
//     // head=delete_at_head(head);
//     //head=delete_at_index(head,2);
//     head=delete_at_the_key(head,4);
//     //head=delete_at_the_end(head);
//     printf("Linked list after deletion:\n");
//     display_linkedlist(head);
//     return 0;
// }



// //CIRCULAR LINKED LIST 

// //creation and display

// // #include<stdio.h>
// // #include<stdlib.h>
// // typedef struct node{
// //     int data;
// //     struct node* next;
// // } node;
// // void display(node* head){
// //     node* n=head;
// //     printf("The circular linked list is:\n");
// //     do{
// //         printf("%d\t",n->data);
// //         n=n->next;
// //     }while(n!=head);
// // }
// // int main(){
// //     node* head=(node*)malloc(sizeof(node));
// //     node* second=(node*)malloc(sizeof(node));
// //     node* third=(node*)malloc(sizeof(node));
// //     node* fourth=(node*)malloc(sizeof(node));
// //     node* fifth=(node*)malloc(sizeof(node)); 
// //     head->data=1;
// //     head->next=second;
// //     second->data=2;
// //     second->next=third;
// //     third->data=3;
// //     third->next=fourth;
// //     fourth->data=4;
// //     fourth->next=fifth;
// //     fifth->data=5;
// //     fifth->next=head;
// //     display(head);
// //     return 0;
// // }


// //insertion in a circular linked list

// // #include<stdio.h>
// // #include<stdlib.h>
// // typedef struct node{
// //     int data;
// //     struct node* next;
// // } node;
// // node* insert_at_head(node* head,int data){
// //     node* ptr=(node*)malloc(sizeof(node));
// //     node* n=head->next;
// //     while(n->next!=head){
// //         n=n->next;
// //     }
// //     ptr->data=data;
// //     n->next=ptr;
// //     ptr->next=head;
// //     head=ptr;
// //     return head;
// // }
// // node* insert_at_end(node* head,int data){
// //     node* ptr=(node*)malloc(sizeof(node));
// //     node* n=head->next;
// //     while(n->next!=head){
// //         n=n->next;
// //     }
// //     ptr->data=data;
// //     n->next=ptr;
// //     ptr->next=head;
// //     return head;
// // }
// // node* insert_between_nodes(node* head,int data,int index){
// //     node* ptr=(node*)malloc(sizeof(node));
// //     node* n=head;
// //     int i=1;
// //     while(i!=index-1){
// //         n=n->next;
// //         i++;
// //     }
// //     ptr->data=data;
// //     ptr->next=n->next;
// //     n->next=ptr;
// //     return head;
// // }
// // node* insert_after_node(node* head,node* pre_node,int data){
// //     node* ptr = (node*)malloc(sizeof(node));
// //     ptr->data=data;
// //     ptr->next=pre_node->next;
// //     pre_node->next=ptr;
// //     return head;
// // }
// // void display(node* head){
// //     node* n=head;
// //     if (head == NULL) {
// //         printf("The list is empty");
// //         return;
// //     }
// //     printf("The circular linked list is:\n");
// //     do{
// //         printf("%d\t",n->data);
// //         n=n->next;
// //     }while(n!=head);
// //     printf("\n");
// // }
// // int main(){
// //     node* head=(node*)malloc(sizeof(node));
// //     node* second=(node*)malloc(sizeof(node));
// //     node* third=(node*)malloc(sizeof(node));
// //     node* fourth=(node*)malloc(sizeof(node));
// //     node* fifth=(node*)malloc(sizeof(node)); 
// //     head->data=1;
// //     head->next=second;
// //     second->data=2;
// //     second->next=third;
// //     third->data=3;
// //     third->next=fourth;
// //     fourth->data=4;
// //     fourth->next=fifth;
// //     fifth->data=5;
// //     fifth->next=head;
// //     printf("The circular linked list before insertion:\n");
// //     display(head);
// //     head=insert_after_node(head,second,8);
// //     //head=insert_between_nodes(head,9,3);
// //     //head=insert_at_end(head,6);
// //     //head=insert_at_head(head,9);
// //     printf("The circular linked list after insertion:\n");
// //     display(head);
// //     return 0;
// // }


// // #include<stdio.h>
// // #include<stdlib.h>
// // typedef struct node {
// //     int data;
// //     struct node* next;
// // } node;
// // void display(node* head){
// //     node* n=(node*)malloc(sizeof(node));
// //     n=head;
// //     if(head==NULL){
// //         printf("The circular linked list is empty.");
// //         return;
// //     }
// //     printf("The circular linked list is:\n");
// //     do{
// //         printf("%d\t",n->data);
// //         n=n->next;
// //     }while(n!=head);
// // }
// // node* create_node(int data){
// //     node* p=(node*)malloc(sizeof(node));
// //     p->data=data;
// //     p->next=p;
// //     return p;
// // }
// // node* insert(node* head,int data){
// //     node* ptr=(node*)malloc(sizeof(node));
// //     node* n=(node*)malloc(sizeof(node));
// //     n=head;
// //     if(head == NULL){
// //         return create_node(data);
// //     }
// //     while(n->next!=head){
// //         n=n->next;
// //     }
// //     ptr->data=data;
// //     n->next=ptr;
// //     ptr->next=head;
// //     return head;
// // }
// // int main(){
// //     node* head=(node*)malloc(sizeof(node));
// //     head=NULL;
// //     head=insert(head,10);
// //     head=insert(head,20);
// //     head=insert(head,30);
// //     head=insert(head,40);
// //     head=insert(head,50);
// //     head=insert(head,60);
// //     display(head);
// //     return 0;
// // }



// //DELETION IN A CIRCULAR LINKED LIST

// // #include<stdio.h>
// // #include<stdlib.h>
// // typedef struct node{
// //     int data;
// //     struct node* next;
// // } node;
// // void display(node* head){
// //     node* n=(node*)malloc(sizeof(node));
// //     n=head;
// //     if(head == NULL){
// //         printf("The circular linked list is empty.");
// //         return;
// //     }
// //     printf("The circular linked list is:\n");
// //     do{
// //         printf("%d\t",n->data);
// //         n=n->next;
// //     }while(n!=head);
// // }
// //node* delete_at_head(node* head){
// //    if(head == NULL){
// //         return;
// //    }
// //    if(head->next == head){
// //        node* ptr=head;
// //        free(ptr);
// //        head = NULL;
// //    }
// //     node* p=(node*)malloc(sizeof(node));
// //     node* q=(node*)malloc(sizeof(node));
// //     p=head;
// //     q=head;
// //     while(q->next!=head){
// //         q=q->next;
// //     }
// //     q->next=p->next;
// //     head=p->next;
// //     free(p);
// //     return head;
// // }
// // node* delete_between_nodes(node* head,int index){
// //    if(head == NULL){
// //         return;
// //    }
// //    if(head->next == head){
// //        node* ptr=head;
// //        free(ptr);
// //        head = NULL;
// //    }
// //     node* p=(node*)malloc(sizeof(node));
// //     node* q=(node*)malloc(sizeof(node));
// //     p=head;
// //     q=head->next;
// //     int i=0;
// //     while(i != (index-1)){
// //         q = q->next;
// //         p = p->next;
// //         i++;
// //     }
// //     p->next=q->next;
// //     free(q);
// //     return head;
// // }
// // node* delete_at_end(node* head){
// //    if(head == NULL){
// //         return;
// //    }
// //    if(head->next == head){
// //        node* ptr=head;
// //        free(ptr);
// //        head = NULL;
// //    }
// //     node* p=(node*)malloc(sizeof(node));
// //     node* q=(node*)malloc(sizeof(node));
// //     p=head;
// //     q=head->next;
// //     while(q->next!=head){
// //         q = q->next;
// //         p = p->next;  
// //     }
// //     p->next=q->next;
// //     free(q);
// //     return head;
// // }
// // node* delete_at_key(node* head,int key){
// //    if(head == NULL){
// //         return;
// //    }
// //    if(head->next == head){
// //        node* ptr=head;
// //        free(ptr);
// //        head = NULL;
// //    }
// //     node* p=(node*)malloc(sizeof(node));
// //     node* q=(node*)malloc(sizeof(node));
// //     p=head;
// //     q=head->next;
// //     while(q->data!=key){
// //         q = q->next;
// //         p = p->next;  
// //     }
// //     p->next=q->next;
// //     if(head->data==key){
// //         head=head->next;
// //     }
// //     free(q);
// //     return head;
// // }
// // int main(){
// //     node* head=(node*)malloc(sizeof(node));
// //     node* second=(node*)malloc(sizeof(node));
// //     node* third=(node*)malloc(sizeof(node));
// //     node* fourth=(node*)malloc(sizeof(node));
// //     node* fifth=(node*)malloc(sizeof(node));
// //     head->data=10;
// //     head->next=second;
// //     second->data=20;
// //     second->next=third;
// //     third->data=30;
// //     third->next=fourth;
// //     fourth->data=40;
// //     fourth->next=fifth;
// //     fifth->data=50;
// //     fifth->next=head;
// //     printf("The circular linked list before deletion is:\n");
// //     display(head);
// //     //head=delete_at_end(head);
// //     //head=delete_between_nodes(head,3);
// //     //head=delete_at_head(head);
// //     head=delete_at_key(head,10);
// //     printf("The circular linked list after deletion is:\n");
// //     display(head);
// //     return 0;
// // }


// //DOUBLY LINKED LIST

// //insertion

// // #include<stdio.h>
// // #include<stdlib.h>
// // typedef struct node{
// //     int data;
// //     struct node* next;
// //     struct node* prev;
// // } node;
// // void display(node* head){
// //     if(head==NULL){
// //         printf("The linked list is empty.");
// //         return;
// //     }
// //     printf("The linked list is:\n");
// //     while(head != NULL){
// //         printf("%d\t",head->data);
// //         head=head->next;
// //     }
// // }
// // void traversal(node* ptr){
// //     if(ptr==NULL){
// //         printf("The linked list is empty.");
// //         return;
// //     }
// //     printf("The linked list in reverse order is:\n");
// //     while(ptr!=NULL){
// //         printf("%d\t",ptr->data);
// //         ptr=ptr->prev;
// //     }
// // }
// // node* insert_at_head(node* head,int data){
// //     node* ptr=(node*)malloc(sizeof(node));
// //     ptr->data=data;
// //     ptr->prev=NULL;
// //     ptr->next=head;
// //     head->prev=ptr;
// //     head=ptr;
// //     return head;
// // }
// // node* insert_between_nodes(node* head,int data,int index){
// //     node* p=(node*)malloc(sizeof(node));
// //     node* q=(node*)malloc(sizeof(node));
// //     node* n=(node*)malloc(sizeof(node));
// //     p=head;
// //     int i=0;
// //     while(i!=(index-1)){
// //         p=p->next;
// //         i++;
// //     }
// //     n=p->next;
// //     q->data=data;
// //     q->next=n;
// //     p->next=q;
// //     q->prev=p;
// //     n->prev=q;
// //     return head;
// // }
// // node* insert_at_end(node* head,int data){
// //     node* p=(node*)malloc(sizeof(node));
// //     node* q=(node*)malloc(sizeof(node));
// //     q=head;
// //     while(q->next!=NULL){
// //         q=q->next;
// //     }
// //     p->data=data;
// //     q->next=p;
// //     p->next=NULL;
// //     p->prev=q;
// //     return head;
// // }
// // int main(){
// //     node* head=(node*)malloc(sizeof(node));
// //     node* second=(node*)malloc(sizeof(node));
// //     node* third=(node*)malloc(sizeof(node));
// //     node* fourth=(node*)malloc(sizeof(node));
// //     node* fifth=(node*)malloc(sizeof(node));
// //     head->data=1;
// //     head->next=second;
// //     head->prev=NULL;
// //     second->data=2;
// //     second->next=third;
// //     second->prev=head;
// //     third->data=3;
// //     third->next=fourth;
// //     third->prev=second;
// //     fourth->data=4;
// //     fourth->next=fifth;
// //     fourth->prev=third;
// //     fifth->data=5;
// //     fifth->next=NULL;
// //     fifth->prev=fourth;
// //     printf("The linked list before insertion:\n");
// //     display(head);
// //     // printf("\n");
// //     //traversal(fifth);
// //     //head=insert_at_head(head,9);
// //     //head=insert_between_nodes(head,8,3);
// //     head=insert_at_end(head,7);
// //     printf("\n");
// //     printf("The linked list after insertion:\n");
// //     display(head);
// //     return 0;
// // }


// // #include<stdio.h>
// // #include<stdlib.h>
// // typedef struct node{
// //     int data;
// //     struct node* next;
// //     struct node* prev;
// // } node;
// // void display(node* head){
// //     if(head==NULL){
// //         printf("The linked list is empty.");
// //         return;
// //     }
// //     printf("The linked list is:\n");
// //     while(head!=NULL){
// //         printf("%d\t",head->data);
// //         head=head->next;
// //     }
// // }
// // node* create_node(int data){
// //     node* ptr=(node*)malloc(sizeof(node));
// //     ptr->data=data;
// //     ptr->next=NULL;
// //     ptr->prev=NULL;
// //     return ptr;
// // }
// // node* insert(node* head,int data){
// //     node* ptr=(node*)malloc(sizeof(node));
// //     node* n=(node*)malloc(sizeof(node));
// //     n=head;
// //     if(head==NULL){
// //         return create_node(data);
// //     }
// //     while(n->next==NULL){
// //         n=n->next;
// //     }
// //     n->next=ptr;
// //     ptr->data=data;
// //     ptr->next=NULL;
// //     ptr->prev=n;
// //     return head;
// // }
// // int main(){
// //     node* head=(node*)malloc(sizeof(node));
// //     head=insert(head,10);
// //     head=insert(head,20);
// //     head=insert(head,30);
// //     head=insert(head,40);
// //     head=insert(head,50);
// //     display(head);
// //     return 0;
// // }


// //deletion

// // #include<stdio.h>
// // #include<stdlib.h>
// // typedef struct node{
// //     int data;
// //     struct node* next;
// //     struct node* prev;
// // } node;
// // void display(node* head){
// //     if(head==NULL){
// //         printf("The linked list is empty.");
// //         return;
// //     }
// //     printf("The linked list is:\n");
// //     while(head != NULL){
// //         printf("%d\t",head->data);
// //         head=head->next;
// //     }
// // }
// // node* delete_at_head(node* head){
// //     node* p=(node*)malloc(sizeof(node));
// //     p=head;
// //     head=head->next;
// //     free(p);
// //     return head;
// // }
// // node* delete_between_nodes(node* head,int index){
// //     node* p=(node*)malloc(sizeof(node));
// //     node* q=(node*)malloc(sizeof(node));
// //     q=head->next;
// //     p=head;
// //     int i=1;
// //     while(i!=(index-1)){
// //         p=p->next;
// //         q=q->next;
// //         i++;
// //     }
// //     p->next=q->next;
// //     free(q);
// //     return head;
// // }
// // node* delete_at_end(node* head){
// //     node* p=(node*)malloc(sizeof(node));
// //     node* q=(node*)malloc(sizeof(node));
// //     p=head;
// //     q=head->next;
// //     while(q->next!=NULL){
// //         p=p->next;
// //         q=q->next;
// //     }
// //     p->next=NULL;
// //     free(q);
// //     return head;
// // }
// // int main(){
// //     node* head=(node*)malloc(sizeof(node));
// //     node* second=(node*)malloc(sizeof(node));
// //     node* third=(node*)malloc(sizeof(node));
// //     node* fourth=(node*)malloc(sizeof(node));
// //     node* fifth=(node*)malloc(sizeof(node));
// //     head->data=1;
// //     head->next=second;
// //     head->prev=NULL;
// //     second->data=2;
// //     second->next=third;
// //     second->prev=head;
// //     third->data=3;
// //     third->next=fourth;
// //     third->prev=second;
// //     fourth->data=4;
// //     fourth->next=fifth;
// //     fourth->prev=third;
// //     fifth->data=5;
// //     fifth->next=NULL;
// //     fifth->prev=fourth;
// //     printf("The linked list before deletion:\n");
// //     display(head);
// //     printf("\n");
// //     //head=delete_at_head(head);
// //     //head=delete_between_nodes(head,3);
// //     head=delete_at_end(head);
// //     printf("The linked list after deletion is:\n");
// //     display(head);
// //     return 0;
// // }
