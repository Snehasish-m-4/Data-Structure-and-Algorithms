//binary search(iterative)


// #include <stdio.h>
// int binarysearch(int arr[],int i,int n,int x);
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int size=sizeof(arr)/sizeof(arr[0]) ;
//     int x;
//     printf("Enter the number:");
//     scanf("%d",&x);
//     int index=binarysearch(arr,0,size-1,x);
//     if(index==-1){
//         printf("The number is not present.");
//     }
//     else{
//         printf("The number is present.");
//     }
//     return 0;
// }
// int binarysearch(int arr[],int i,int n,int x){
//     while(n>=i){
//         int mid=i+(n-i)/2;
//         if(arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]<x){
//             i=mid+1;
//         }
//         else{
//             n=mid-1;
//         }
//     }
//     return -1;
// }



//bineary search(recursively)


// #include <stdio.h>
// int binarysearch(int arr[],int i,int n,int x);
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int size=sizeof(arr)/sizeof(arr[0]) ;
//     int x;
//     printf("Enter the number:");
//     scanf("%d",&x);
//     int index=binarysearch(arr,0,size-1,x);
//     if(index==-1){
//         printf("The number is not present.");
//     }
//     else{
//         printf("The number is present.");
//     }
//     return 0;
// }
// int binarysearch(int arr[],int i,int n,int x){
//     int mid=i+(n-i)/2;
//     if(i<=n){
//         if(arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]<x){
//             return binarysearch(arr,mid+1,n,x);
//         }
//         else{
//             return binarysearch(arr,0,mid-1,x);
//         }
//         return -1;
//     }
//}



//linear search(iterative)


// #include<stdio.h>
// int linearsearch(int *arr,int n,int s){
//     for(int i=0;i<s;i++){
//         if(arr[i] == n){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,11,12,13,14,15};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int n;
//     printf("Enter the number to search from the array:");
//     scanf("%d",&n);
//     if(linearsearch(arr,n,size)){
//         printf("The element is present in the array.\n");   
//     }
//     else{
//         printf("The element is not present in the array.\n");
//     }
//     return 0;
// }

