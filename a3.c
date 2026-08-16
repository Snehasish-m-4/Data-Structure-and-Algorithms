// Matrix & Array problems

//no:1
//addition

// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter the number of rows:");
//     scanf("%d",&m);
//     printf("Enter the number of column:");
//     scanf("%d",&n);
//     int arr1[m][n],arr2[m][n];
//     printf("Enter the elements of the array:");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("arr1[%d][%d]:",i,j);
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//      for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("arr2[%d][%d]:",i,j);
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     int *ptr1,*ptr2;
//     ptr1=&arr1[0][0];
//     ptr2=&arr2[0][0];
//     printf("The addition of two matrix is:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d\t",((*(ptr1+i*m+j))+(*(ptr2+i*m+j))));
//         }
//         printf("\n");
//     }
//     return 0;
// }



//no:2
//insertion

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("%dth element:",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("The array before insertion:");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     int position,x;
//     printf("Enter the position:");
//     scanf("%d",&position);
//     printf("Enter the number:");
//     scanf("%d",&x);
//     for(int i=(n-1);i>=(position-1);i--){
//         arr[i+1]=arr[i];
//     }
//     arr[position-1]=x;
//     n++;
//     printf("After inserting the number in the array:\n");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }



//no:3
//deletion

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("%dth element:",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("The array before delete:");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     int position,x;
//     printf("Enter the position:");
//     scanf("%d",&position);
//     for(int i=position;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     n--;
//     printf("After delete the number from the array:\n");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }



//no:4
//ascending order

// #include<stdio.h>
// void bubblesort(int arr[],int n);
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("Enter the %dth element:",(i+1));
//         scanf("%d",&arr[i]);
//     }
//     bubblesort(arr,n);
//     printf("The array after sorting:\n");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }
// void bubblesort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//             else{
//                 continue;
//             }
//         }
//     }
// }



//no:5
//decending order

// #include<stdio.h>
// void bubblesort(int arr[],int n);
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("Enter the %dth element:",(i+1));
//         scanf("%d",&arr[i]);
//     }
//     bubblesort(arr,n);
//     printf("The array after sorting:\n");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }
// void bubblesort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//             else{
//                 continue;
//             }
//         }
//     }
// }



//no:6
//diagonal sum

//#include<stdio.h>
// int main(){
//    int m,n,sum=0;
//     printf("Enter the number of rows:");
//     scanf("%d",&m);
//     printf("Enter the number of column:");
//     scanf("%d",&n);
//     int arr1[m][n];
//     printf("Enter the elements of the array:");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("arr1[%d][%d]:",i,j);
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//            if(i==j){
//             sum+=arr1[i][j];
//            }
//            else{
//             continue;
//            }
//         }
//     }
//     printf("The sum of main diagonal elements of a matrix is:%d",sum);
//     return 0;
// }



//no:7
//column/row summation

// #include <stdio.h>
// int main(){
//     int m,n,sum=0,num;
//     int choice;
//     printf("Enter the number of rows:");
//     scanf("%d",&m);
//     printf("Enter the number of column:");
//     scanf("%d",&n);
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("arr[%d][%d]:",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }  
//     printf("Enter your choice(row=1/column=2):\n");
//     scanf("%d",&choice);
//     if(choice==2){
//         printf("Enter the number of column to find sum:");
//         scanf("%d",&num);
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(j==(num-1)){
//                     sum+=arr[i][j];
//                 }
//                 else{
//                     continue;
//                 }
//             }
//         }
//         printf("the sum of %d column is =%d",num,sum);
//     }
//     else{
//         printf("Enter the number of row to find sum:");
//         scanf("%d",&num);
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(i==(num-1)){
//                     sum+=arr[i][j];
//                 }
//                 else{
//                     continue;
//                 }
//             }
//         }
//         printf("the sum of %d column is =%d",num,sum);
//     }
//     return 0;
// }



//no:8
//matrix multiplication

//#include <stdio.h>    
// int main(){  
//     int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
//     printf("enter the number of row=");    
//     scanf("%d",&r);    
//     printf("enter the number of column=");    
//     scanf("%d",&c);    
//     printf("enter the first matrix element=\n");    
//     for(i=0;i<r;i++){    
//         for(j=0;j<c;j++){    
//             printf("a[%d][%d]:",i,j); 
//             scanf("%d",&a[i][j]); 
//         }    
//     }    
//     printf("enter the second matrix element=\n");    
//     for(i=0;i<r;i++){    
//         for(j=0;j<c;j++){    
//             printf("b[%d][%d]:",i,j);
//             scanf("%d",&b[i][j]);    
//         }    
//     }    
//     printf("multiply of the matrix=\n");    
//     for(i=0;i<r;i++){    
//         for(j=0;j<c;j++){    
//             mul[i][j]=0;    
//             for(k=0;k<c;k++){    
//                 mul[i][j]+=a[i][k]*b[k][j];    
//             }    
//         }    
//     }         
//     for(i=0;i<r;i++){    
//         for(#include <stdio.h>    
//             printf("%d\t",mul[i][j]);    
//         }    
//         printf("\n");    
//     }    
//     return 0;  
// }    



//no:9
//matrix transpose

// #include <stdio.h>
// int main(){
//     int m,n;
//     printf("enter the rows number:");
//     scanf("%d",&m);
//     printf("Enter the number of column:");
//     scanf("%d",&n);
//     int a[m][n],b[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("a[%d][%d]:",i,j);
//             scanf("%d",&a[i][j]);
//             b[j][i]=a[i][j];
//         }
//     }
//     printf("The traspose of the array is:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d\t",b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//no:10
//
