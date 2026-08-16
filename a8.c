//STACK 


//Implementation of stack using array


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct stack{
//     int size;
//     int top;
//     int *arr;
// } stack;
// int isempty(stack *ptr){
//     if(ptr->top==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int isfull(stack *ptr){
//     if(ptr->top==((ptr->size)-1)){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void display(stack* s){
//     stack* ptr=s;
//     printf("The stack is:\n");
//     for(int i=0;i<ptr->size;i++){
//         printf("%d\t",ptr->arr[i]);
//     }
// }
// //push operation
// void push(stack *s,int data){
//     if(isfull(s)){
//         printf("stack overflow\n");
//     }
//     else{
//         s->top++;
//         s->arr[s->top]=data;
//     }
// }
// //pop operation
// int pop(stack* ptr){
//     if(isempty(ptr)){
//         printf("stack underflow.\n");
//     }
//     else{
//         int val=ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
// }
// //peek operation
// int peek(stack* ptr, int i){
//     if(((ptr->top)-i)+1<0){
//         printf("Invalid position.");
//     }
//     else{
//         return ptr->arr[((ptr->top)-i)+1];
//     }
// }
// //stack top operation
// int stack_top(stack* ptr){
//     if(isfull(ptr)){
//         return ptr->arr[ptr->top];
//     }
// }
// //stack bottom operation
// int stack_bottom(stack* ptr){
//     if(isempty(ptr)){
//         return 0;
//     }
//     else{
//         return ptr->arr[0];
//     }
// }
// int main(){
//     stack *s;
//     s->size = 5;
//     s->top = -1;
//     s->arr =(int*)malloc(s->size*(sizeof(int)));
//     push(s,1);
//     push(s,2);
//     push(s,3);
//     push(s,4);
//     push(s,5);
//     // display(s);
//     // printf("\n");
//     // printf("the element %d is poped from the stack.\n",pop(s));
//     // printf("the element %d is poped from the stack.\n",pop(s));
//     // printf("the element %d is poped from the stack.\n",pop(s));
//     // for(int i=1;i<=s->top+1;i++){
//     //     printf("The num %d is present in the position %d.\n",i,peek(s,i));
//     // }
//     printf("The top most element in the stack is:%d\n",stack_top(s));
//     printf("The bottom element in the stack is:%d\n",stack_bottom(s));
//     return 0;
// }


//implementation of stack using linked list


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;
// } node;
// int isempty(node* top){
//     if(top == NULL){
//         return 1;
//     }
//     return 0;
// }
// int isfull(node* top){
//     node* n=(node*)malloc(sizeof(node));
//     if(n == NULL){
//         return 1;
//     }
//     return 0;
// }
// //display the linked list
// void display(node* ptr){
//     if(ptr==NULL){
//         printf("The stack is empty.\n");
//     }
//     printf("The stack is:\n");
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr=ptr->next;
//     }
// }
// //push operation
// node* push(node* top,int data){
//     node* ptr=(node*)malloc(sizeof(node));
//     if(isfull(top)){
//         printf("stack overflow.\n");
//     }
//     else{
//         ptr->data=data;
//         ptr->next=top;
//         top=ptr;
//         return top;
//     }
// }
// //pop operation
// node* pop(node** top){
//     if(isempty(*top)){
//         printf("stack underflow.");
//     }
//     else{
//         node* ptr=*top;
//         *top=(*top)->next;
//         int n=ptr->data;
//         free(ptr);
//         return n;
//     }
// }
// //peek operation
// int peek(node* top,int index){
//     node* ptr = top;
//     for(int i=0;(i<index-1 && ptr!=NULL);i++){
//         ptr=ptr->next;
//     }
//     if(ptr!=NULL){
//         return ptr->data; 
//     }
// }
// //stack top operation
// int stack_top(node* top){
//     return top->data;
// }
// //stack bottom operation
// int stack_bottom(node* top){
//     node* ptr=top;
//     if(isempty(top)){
//         printf("stack is empty.");
//     }
//     while(ptr->next!=NULL){
//         ptr=ptr->next;
//     }
//     return ptr->data;
// }
// int main(){
//     node* top=(node*)malloc(sizeof(node));
//     top=NULL;
//     top=push(top,9);
//     top=push(top,7);
//     top=push(top,5);
//     top=push(top,3);
//     top=push(top,1);
//     display(top);
//     // printf("The  number %d poped from the stack.\n",pop(&top));
//     // printf("The  number %d poped from the stack.\n",pop(&top));
//     // printf("The  number %d poped from the stack.\n",pop(&top));
//     // display(top);
//     // for(int i=1;i<=5;i++){
//     //     printf("In the %d position element is: %d\n",i,peek(top,i));
//     // }
//     printf("The top most element in the stack is:%d\n",stack_top(top));
//     printf("The bottom element in the stack is: %d\n",stack_bottom(top));
//     return 0;
// }







//QUEUE


//Implementation of linear queue using arrys


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct queue{
//     int size;
//     int f;
//     int r;
//     int* arr;
// } queue;
// //display in forward style
// void display(queue *q){
//     if(isEmpty(q)){
//         printf("The queue is empty.\n");
//     }
//     else{
//         printf("The queue is:\n");
//         for(int i=(q->f)+1;i<=q->r;i++){
//             printf("%d\t",q->arr[i]);
//         }
//         printf("\n");
//     }
// }
// //display in reverse order
// void traverse(queue* q){
//     if(isEmpty(q)){
//         printf("The queue is empty.\n");
//     }
//     else{
//         printf("The queue in reverse order is:\n");
//         for(int i=q->r;i>q->f;i--){
//             printf("%d\t",q->arr[i]);
//         }
//         printf("\n");
//     }
// }
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
//int queue_top(queue* ptr){
//  return ptr->arr[ptr->r];
//}
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
//     q.size = 6;
//     q.f = q.r = -1;
//     q.arr = (int*)malloc(q.size*(sizeof(int)));
//     enqueue(&q,12);
//     enqueue(&q,10);
//     enqueue(&q,8);
//     enqueue(&q,6);
//     enqueue(&q,4);
//     enqueue(&q,2);
//     display(&q);
//     traverse(&q);
//     printf("Dequeue element:%d\n",dequeue(&q));
//     printf("Dequeue element:%d\n",dequeue(&q));
//     printf("Dequeue element:%d\n",dequeue(&q));
//     display(&q);
//     traverse(&q);
//     return 0;
// }


//Implementation of linear queue using linked list


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct queue{
//     int data;
//     struct queue* next;
// } node;
// node* f = NULL;
// node* r = NULL;
// int isEmpty(node* ptr){
//     if(ptr == NULL){
//         return 1;
//     }
//     return 0;
// }
// int isFull(node* ptr){
//     if(ptr == NULL){
//         return 1;
//     }
//     return 0;
// }
// int queue_top(){
//     return f->data;
// }
// void traversal(node* ptr){
//     if(ptr == NULL){
//         return;
//     }
//     printf("The queue is:\n");
//     while(ptr!=NULL){
//         printf("%d\t",ptr->data);
//         ptr=ptr->next;
//     }
//     printf("\n");
// }
// void enqueue(int val){
//     node* newnode = (node*)malloc(sizeof(node));
//     if(newnode == NULL){
//         printf("The queue is full.\n");
//     }
//     else{
//         newnode->next = NULL;
//         newnode->data = val;
//         if(f == NULL){
//             f=r=newnode;
//         }
//         else{
//             r->next = newnode;
//             r = newnode;
//         }
//     }
// }
// int dequeue(){
//     int val = -1;
//     node* ptr = f;
//     if(ptr == NULL){
//         printf("The queue is empty.\n");
//     }
//     else{
//         val = f->data;
//         f = f->next;
//         free(ptr);
//     }
//     return val;
// }
// int main(){
//     traversal(f);
//     printf("Dequeuing element:%d\n",dequeue());
//     enqueue(12);
//     enqueue(10);
//     enqueue(8);
//     enqueue(6);
//     enqueue(4);
//     enqueue(2);
//     printf("The first element in the queue is:%d\n",queue_top());
//     printf("Dequeuing element:%d\n",dequeue());
//     printf("Dequeuing element:%d\n",dequeue());
//     traversal(f);
//     printf("The first element in the queue is:%d\n",queue_top());
//     return 0;
// }


//Implementation of circular queue using linked list


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct queue{
//     int data;
//     struct queue *next;
// } queue;
// queue* f=NULL;
// queue* r=NULL;
// int getrear(){
//     if(r==NULL){
//         printf("Queue underflow");
//         return -1;
//     }
//     return r->data;
// }
// int getfront(){
//     if(f==NULL){
//         printf("Queue underflow");
//         return -1;
//     }
//     return f->data;
// }
// int isfull(){
//     queue* new=(queue*)malloc(sizeof(queue));
//     if(new==NULL){
//         return 1;
//     }
//     return 0;
// }
// int isempty(){
//     if(r==NULL&&f==NULL){
//         return 1;
//     }
//     return 0; 
// }
// void traversal(queue* f){
//     if(f==NULL){
//         printf("Queue underflow");
//     }
//     queue *n = f;
//     do{
//         printf("%d\t",n->data);
//         n=n->next;
//     }while(n!=f);
//     printf("\n");
// }
// void enqueue(int n){
//     queue* new=(queue*)malloc(sizeof(queue));
//     if(new==NULL){
//         printf("Queue overflow");
//     }
//     else{
//         new->data=n;
//         new->next=new;
//         if(f==NULL){
//             f=r=new;
//         }
//         else{
//             r->next=new;
//             new->next=f;
//             r=new;
//         }
//     }
// }
// int dequeue(){
//     if(f==NULL){
//         printf("Queue underflow");
//         return -1;
//     }
//     else{
//         int val=f->data;
//         f = f->next;
//         r->next = f;
//         return val;
//     }
// }
// int main(){
//     //traversal(f); 
//     enqueue(10);
//     enqueue(9);
//     enqueue(8);
//     enqueue(7);
//     enqueue(6);
//     traversal(f);
//     printf("Dequeueing element:%d\n",dequeue());
//     printf("Dequeueing element:%d\n",dequeue());
//     traversal(f);
//     return 0;
// }


//Implementation of double ended queue(DEqueue) using arrays


// #include<stdio.h>
// #include<stdlib.h>
// typedef struct queue{
//     int size;
//     int f;
//     int r;
//     int* arr;
// } queue;
// int isfull(queue* q){
//     if(q->r == (q->size)-1){
//         return 1;
//     }
//     return 0;
// }
// int isempty(queue* q){
//     if(q->r == q->f || q->size == 0){
//         return 1;
//     }
//     return 0;
// }
// void enqueue_R(queue* q,int data){
//     if(isfull(q)){
//         printf("Queue is full.\n");
//     }
//     q->r++;
//     q->arr[q->r] = data;
// }
// void enqueue_F(queue* q,int data){
//     if(q->f == -1){
//         printf("Insertion has not to be done.\n");
//     }
//     else if(q->f != -1){
//         q->arr[q->f] = data;
//         q->f--;
//     }
// }
// int dequeue_F(queue* q){
//     if(isempty(q)){
//         printf("Queue is empty.\n");
//         return -1;
//     }
//     q->f++;
//     int val = q->arr[q->f];
//     return val;
// }
// int dequeue_R(queue* q){
//     if(isempty(q)){
//         printf("Queue is empty.\n");
//         return -1;
//     }
//     int val = q->arr[q->r];
//     q->r--;
//     return val;
// }
// void display(queue* q){
//     if(isempty(q)){
//         printf("queue is empty.\n");
//     }
//     else{
//         printf("The queue is:\n");
//         for(int i = ((q->f)+1); i<=q->r; i++){
//             printf("%d\t",q->arr[i]);
//         }
//     }
// }
// int main(){
//     queue* q;
//     q->size = 8;
//     q->r = q->f = -1;
//     q->arr = (int*)malloc(q->size*(sizeof(int)));
//     //inserting at rear
//     enqueue_R(q,1);
//     enqueue_R(q,2);
//     enqueue_R(q,3);
//     enqueue_R(q,4);
//     enqueue_R(q,5);
//     enqueue_R(q,6);
//     display(q);
//     printf("\n");
//     printf("Dequeueing element from the front of the queue is:%d\n",dequeue_F(q));
//     printf("Dequeueing element from the front of the queue is:%d\n",dequeue_F(q));
//     printf("Dequeueing element from the front of the queue is:%d\n",dequeue_F(q));
//     display(q);
//     printf("\n");
//     //inserting at the front
//     enqueue_F(q,9);
//     enqueue_F(q,8);
//     enqueue_F(q,7);
//     display(q);
//     printf("\n");
//     printf("Dequeueing element from the rear of the queue is:%d\n",dequeue_R(q));
//     printf("Dequeueing element from the rear of the queue is:%d\n",dequeue_R(q));
//     printf("Dequeueing element from the rear of the queue is:%d\n",dequeue_R(q));
//     display(q);
//     printf("\n");
//     return 0;
// }






//parenthesis checking using stack data structure

// #include<stdio.h>
// #include<stdlib.h>
// typedef struct stack{
//     int size;
//     int top;
//     char* arr;
// } stack;
// int isfull(stack* ptr){
//     if(ptr->top == (ptr->size)-1){
//         return 1;
//     }
//     return 0;
// }
// int isempty(stack* ptr){
//     if(ptr->top == -1){
//         return 1;
//     }
//     return 0;
// }
// void push(stack *s,char data){
//     if(isfull(s)){
//         printf("stack overflow\n");
//     }
//     else{
//         s->top++;
//         s->arr[s->top]=data;
//     }
// }
// char pop(stack* ptr){
//     if(isempty(ptr)){
//         printf("stack underflow.\n");
//     }
//     else{
//         char val=ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
// }
// int parenthesis_match(char* exp){
//     stack* n;
//     n->size=100;
//     n->top=-1;
//     n->arr=(char*)malloc(n->size*sizeof(char));
//     for(int i=0;exp[i]!='\0';i++){
//         if(exp[i] == '('){
//             push(n,'(');
//         }
//         else if(exp[i]==')'){
//             if(isempty(n)){
//                 return 0;
//             }
//             pop(n);
//         }
//     }
//     if(isempty(n)){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     char* exp="2*3(36*68(((+75)";
//     if(parenthesis_match(exp)){
//         printf("The parenthesis are matching.");
//     }
//     else{
//         printf("The parenthesis are not matching.");
//     }
//     return 0;
// }


//Multiple parenthesis checking using stack data structure(not working properly)

// #include<stdio.h>
// #include<stdlib.h>
// typedef struct stack{
//     int size;;
//     int top;
//     char* arr;
// } stack;
// int isfull(stack *ptr){
//     if(ptr->top == (ptr->size)-1){
//         return 1;
//     }
//     return 0;
// }
// int isempty(stack* ptr){
//     if(ptr->top == -1){
//         return 1;
//     }
//     return 0;
// }
// void push(stack* ptr,char data){
//     if(isfull(ptr)){
//         printf("Stack overflow.");
//     }
//     else{
//         ptr->top++;
//         ptr->arr[ptr->top]=data;
//     }
// }
// char pop(stack* ptr){
//     if(isempty(ptr)){
//         printf("Stack underflow.");
//     }
//     else{
//         char val=ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
// }
// int match(char a,char b){
//     if(a=='(' && b==')'){
//         return 1;
//     }
//     else if(a=='}' && b=='{'){
//         return 1;
//     }
//     else if(a==']' && b=='['){
//         return 1;
//     }
//     return 0;
// }
// int parenthesis(char* exp){
//     stack* p;
//     p->size=100;
//     p->top=-1;
//     p->arr=(char*)malloc(p->size*sizeof(char));
//     for(int i=0;exp[i]!='\0';i++){
//         if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
//             push(p,exp[i]);
//         }
//         else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
//             if(isempty(p)){
//                 return 0;
//             }
//             char popped=pop(p);
//             if(match(popped,exp[i])){
//                 return 0; 
//             }
//         }
//     }
// }
// int main(){
//     char* exp="6*[3+(2+42+{242*665})]";
//     if(parenthesis(exp)){
//         printf("The parenthesis are balanced.\n");
//     }
//     else{
//         printf("The parenthesis are not balanced.\n");
//     }
//     return 0;
// }


//Infix to postfix conversion using stack data structure(not working properly)

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// typedef struct stack{
//     int size;
//     int top;
//     char* arr;
// } stack;
// int isempty(stack* ptr){
//     if(ptr->top == -1){
//         return 1;
//     }
//     return 0;
// }
// int isfull(stack* ptr){
//     if(ptr->top == (ptr->size)-1){
//         return 1;
//     }
//     return 0;
// }
// char stacktop(stack* ptr){
//     return ptr->arr[ptr->top];
// }
// void push(stack* ptr,char data){
//     if(isfull(ptr)){
//         printf("Stack overflow.\n");
//     }
//     else{
//         ptr->top++;
//         ptr->arr[ptr->top]=data;
//     }
// }
// char pop(stack* ptr){
//     if(isempty(ptr)){
//         printf("stack underflow.\n");
//     }
//     else{
//         char value=ptr->arr[ptr->top];
//         ptr->top--;
//         return value;
//     }
// }
// int presedence(char ch){
//     if(ch=='*'||ch=='/'){
//         return 3;
//     }
//     else if(ch=='+'||ch=='-'){
//         return 2;
//     }
//     else{
//         return 0;
//     }
// }
// int isoperator(char ch){
//     if(ch=='*'||ch=='/'||ch=='+'||ch=='-'){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// char* infix_to_postfix(char* infix){
//     stack* p = (stack*)malloc(sizeof(stack));
//     p->size=100;
//     p->top=-1;
//     p->arr=(char*)malloc(p->size*sizeof(char));
//     char* postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
//     int i=0;
//     int j=0;
//     while(infix[i]!='\0'){
//         if(!isoperator(infix[i])){
//             postfix[j]=infix[i];
//             i++;
//             j++;
//         }
//         else{
//             if(presedence(infix[i])>presedence(stacktop(p))){
//                 push(p,infix[i]);
//                 i++;
//             }
//             else{
//                 postfix[i]=pop(p);
//                 j++;
//             }
//         }
//     }
//     while(!isempty(p)){
//         postfix[j]=pop(p);
//         j++;
//     }
//     postfix[j]='\0';
//     return postfix;
// }
// int main(){
//     char* infix="a+(d-c)";
//     printf("The expression in postfix is:%s",infix_to_postfix(infix));
//     return 0;
// }

