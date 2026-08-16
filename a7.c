//SORTING ALGORITHMs


//Bubble sort(ascending order)


// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void bubblesort(int *arr, int n){
//     for(int i=0;i<n-1;i++){
//         for(int j = 0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr+j,arr+j+1);
//             }
//             else{
//                 continue;
//             }
//         }
//     }
// }
// void printarray(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {1,4,2,54,353,553,53,532,55,352,9,6,23};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Printing the array before sorting:\n");
//     printarray(arr,n);
//     bubblesort(arr,n);
//     printf("Printing the array after sorting:\n");
//     printarray(arr,n);
//     return 0;
// }


//Bubble sort(descending order)


// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void bubblesort(int *arr, int n){
//     for(int i=0;i<n-1;i++){
//         for(int j = 0;j<n-1-i;j++){
//             if(arr[j]<arr[j+1]){
//                 swap(arr+j,arr+j+1); 
//             }
//             else{
//                 continue;
//             }
//         }
//     }
// }
// void printarray(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {1,4,2,54,353,553,53,532,55,352,9,6,23};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Printing the array before sorting:\n");
//     printarray(arr,n);
//     bubblesort(arr,n);
//     printf("Printing the array after sorting:\n");
//     printarray(arr,n);
//     return 0;
// }


//Bubble sort(optimized)


// #include<stdio.h>
// #include<stdbool.h>
// void swap(int* a,int* b){
//     int temp = *a;
//     *a  = *b;
//     *b = temp;
// }
// void bubblesort(int *arr,int n){
//     bool swapped;
//     for(int i=0;i<n-1;i++){
//         swapped = false;
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr+j,arr+j+1);
//                 swapped  = true;
//             }
//             else{
//                 continue;
//             }
//         }
//         if(swapped == false){
//             break;
//         }
//     }
// }
// void printarray(int* arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Original array:\n");
//     printarray(arr,n);
//     bubblesort(arr,n);
//     printf("Sorted array:\n");
//     printarray(arr,n);
//     return 0;
// }


//Insertion sort(Ascending order)


// #include<stdio.h>
// void print_array(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// void insertion_sort(int* arr,int n){
//     int key,j;
//     for(int i=1;i<=n-1;i++){
//         key = arr[i];
//         j = i-1;
//         while(arr[j] > key && j >= 0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }
// int main(){
//     int arr[] = {21,31,242,534,64,69,75,86,755,97};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Original array:\n");
//     print_array(arr,n);
//     insertion_sort(arr,n);
//     printf("Sorted array:\n");
//     print_array(arr,n);
//     return 0;
// }


//Insertion sort(descending order)


// #include<stdio.h>
// void print_array(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// void insertion_sort(int* arr,int n){
//     int key,j;
//     for(int i=1;i<=n-1;i++){
//         key = arr[i];
//         j = i-1;
//         while(arr[j] < key && j >= 0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }
// int main(){
//     int arr[] = {21,31,242,534,64,69,75,86,755,97};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Original array:\n");
//     print_array(arr,n);
//     insertion_sort(arr,n);
//     printf("Sorted array:\n");
//     print_array(arr,n);
//     return 0;
// }


//Selection sort(ascending order)


// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void print_array(int* arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// void selection_sort(int* arr,int n){
//     int min;
//     for(int i = 0; i <= n-1; i++){
//         min = i;
//         for(int j = i+1; j <= n-1; j++){
//             if(arr[j] < arr[min]){
//                 min = j;
//             }
//         }
//         swap(arr+i,arr+min);
//     }
// }
// int main(){
//     int arr[] = {12,32,43,45,65,76,87,98,90};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Original array:\n");
//     print_array(arr,n);
//     selection_sort(arr,n);
//     printf("Sorted array:\n");
//     print_array(arr,n);
//     return 0;
// }


//Selection sort(descending order)


// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void print_array(int* arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// void selection_sort(int* arr,int n){
//     int min;
//     for(int i = 0; i <= n-1; i++){
//         min = i;
//         for(int j = i+1; j <= n-1; j++){
//             if(arr[j] > arr[min]){
//                 min = j;
//             }
//         }
//         swap(arr+i,arr+min);
//     }
// }
// int main(){
//     int arr[] = {12,32,43,45,65,76,87,98,90};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Original array:\n");
//     print_array(arr,n);
//     selection_sort(arr,n);
//     printf("Sorted array:\n");
//     print_array(arr,n);
//     return 0;
// }


//Quick sort(ascending order)


// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void print_array(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// int partition(int *arr,int low,int high){
//     int pivot = arr[low];
//     int i = low + 1;
//     int j = high;
//     do{
//         while(arr[i] <= pivot){
//             i++;
//         }
//         while(arr[j] > pivot){
//             j--;
//         }
//         if(i<j){
//             swap(arr+i,arr+j);
//         }
//     }while(i<j);
//     //swap pivot and current position
//     swap(arr+low,arr+j);
//     return j;
// }
// void quick_sort(int *arr,int low,int high){
//     int part_index;
//     if(low < high){
//         part_index = partition(arr,low,high);
//         //sort left subarray
//         quick_sort(arr,low,part_index-1);
//         //sort right subarray
//         quick_sort(arr,part_index+1,high);
//     }
// }
// int main(){
//     int arr[] = {21,32,43,45,65,76,87,58,53};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Original array:\n");
//     print_array(arr,n);
//     quick_sort(arr,0,n-1);
//     printf("Sorted array:\n");
//     print_array(arr,n);
//     return 0;
// }


//Quick sort(descending order)


// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void print_array(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// int partition(int *arr,int low,int high){
//     int pivot = arr[low];
//     int i = low + 1;
//     int j = high;
//     do{
//         while(arr[i] >= pivot){
//             i++;
//         }
//         while(arr[j] < pivot){
//             j--;
//         }
//         if(i<j){
//             swap(arr+i,arr+j);
//         }
//     }while(i<j);
//     //swap pivot and current position
//     swap(arr+low,arr+j);
//     return j;
// }
// void quick_sort(int *arr,int low,int high){
//     int part_index;
//     if(low < high){
//         part_index = partition(arr,low,high);
//         //sort left subarray
//         quick_sort(arr,low,part_index-1);
//         //sort right subarray
//         quick_sort(arr,part_index+1,high);
//     }
// }
// int main(){
//     int arr[] = {21,32,43,45,65,76,87,58,53};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Original array:\n");
//     print_array(arr,n);
//     quick_sort(arr,0,n-1);
//     printf("Sorted array:\n");
//     print_array(arr,n);
//     return 0;
// }


//Mergesort(ascending order)(with two different array into one array)


// #include<stdio.h>
// void print_array(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// void mergesort(int *a,int *b,int *c,int n,int m){
//     int i,j,k;
//     i=j=k=0;
//     while(i<n && j<m){
//         if(a[i]<b[j]){
//             c[k] = a[i];
//             i++;
//             k++;
//         }
//         else{
//             c[k] = b[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<n){
//         c[k] = a[i];
//         i++;
//         k++;
//     }
//     while(j<m){
//         c[k] = b[j];
//         j++;
//         k++;
//     }
// }
// int main(){
//     int a[] = {21,32,43,47,65};
//     int n = sizeof(a)/sizeof(a[0]);
//     int b[] = {11,12,14,16,17,19,};
//     int m = sizeof(b)/sizeof(b[0]);
//     int c[] = {};
//     printf("Original arrays:\n");
//     print_array(a,n);
//     print_array(b,m);
//     mergesort(a,b,c,n,m);
//     printf("Sorted array:\n");
//     for(int i=0;i<(m+n);i++){
//         printf("%d\t",c[i]);
//     }
//     return 0;
// }


//Mergesort(descending order)(with two different array into one array)
//(Has not work properly)


// #include<stdio.h>
// void print_array(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// void mergesort(int *a,int *b,int *c,int n,int m){
//     int i,j,k;
//     i=j=k=0;
//     while(i<n && j<m){
//         if(a[i]>b[j]){
//             c[k] = a[i];
//             i++;
//             k++;
//         }
//         else{
//             c[k] = b[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<n){
//         c[k] = a[i];
//         i++;
//         k++;
//     }
//     while(j<m){
//         c[k] = b[j];
//         j++;
//         k++;
//     }
// }
// int main(){
//     int a[] = {70,65,60,55,50,45,40,35.30};
//     int n = sizeof(a)/sizeof(a[0]);
//     int b[] = {9,8,7,6,5};
//     int m = sizeof(b)/sizeof(b[0]);
//     int c[] = {};
//     printf("Original arrays:\n");
//     print_array(a,n);
//     print_array(b,m);
//     mergesort(a,b,c,n,m);
//     printf("Sorted array:\n");
//     for(int i=0;i<(m+n);i++){
//         printf("%d\t",c[i]);
//     }
//     return 0;
// }


//Mergesort(in an one array)


// #include<stdio.h>
// void print_array(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// void merge(int *arr,int low,int mid,int high){
//     int n1 = mid - low + 1;
//     int n2 = high - mid;
//     int leftarr[n1],rightarr[n2];
//     for(int i=0;i<n1;i++){
//         leftarr[i] = arr[low+i];
//     }
//     for(int j=0;j<n2;j++){
//         rightarr[j] = arr[mid+1+j];
//     }
//     int i,j,k;
//     i = j = 0;
//     k = low;
//     while (i<n1 && j<n2){
//         if(leftarr[i]<rightarr[j]){
//             arr[k] = leftarr[i];
//             i++;
//             k++;
//         }
//         else{
//             arr[k] = rightarr[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<n1){
//         arr[k] = leftarr[i];
//         i++;
//         k++; 
//     }
//     while(j<n2){
//         arr[k] = rightarr[j];
//         j++;
//         k++;
//     }
// }
// void mergesort(int *arr,int low,int high){
//     if(low<high){
//         int mid = low + (high-low)/2;
//         mergesort(arr,low,mid);
//         mergesort(arr,mid+1,high);
//         merge(arr,low,mid,high);
//     }
// }
// int main(){
//     int arr[] = {11,12,13,14,15,16,1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int low = 0;
//     int high = n-1;
//     printf("Original array:\n");
//     print_array(arr,n);
//     mergesort(arr,low,high);
//     printf("Sorted array:\n");
//     print_array(arr,n);
//     return 0;
// }


//Count sort


// #include<stdio.h>
// #include<limits.h>
// #include<stdlib.h>
// void print_array(int *arr,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// int maximum(int arr[],int n){
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     return max;
// }
// void count_sort(int* arr,int n){
//     int max = maximum(arr,n);
//     int *count = (int*)malloc((max+1)*sizeof(int));
//     for(int l=0;l<=max;l++){
//         count[l] = 0;
//     }
//     for(int k=0;k<=max;k++){
//         count[arr[k]] = count[arr[k]]+1;
//     }
//     int i = 0;
//     int j = 0;
//     while(i<=max){
//         if(count[i]>0){
//             arr[j] = i;
//             count[i] = count[i]-1;
//             j++;
//         }
//         else{
//             i++;
//         }
//     }
// }
// int main(){
//     int arr[] = {1,6,2,4,5,3,9,2,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Original array:\n");
//     print_array(arr,n);
//     count_sort(arr,n);
//     printf("Sorted array:\n");
//     print_array(arr,n);
//     return 0;
// }


//Bucket sort(ascending order)


// #include<stdio.h>
// int getmax(int a[],int n){
//     int max=a[0];
//     for(int i=1;i<n;i++){
//         if(max<a[i]){
//             max=a[i];
//         }
//         else{
//             continue;
//         }
//     }
//     return max;
// }
// int bucket_sort(int a[],int n){
//     int max=getmax(a,n);
//     int bucket[max];
//     for(int i=0;i<=max;i++){
//         bucket[i] = 0;
//     }
//     for(int i=0;i<n;i++){
//         bucket[a[i]]++;
//     }
//     for(int i=0,j=0;i<=max;i++){
//         while(bucket[i]>0){
//             a[j]=i;
//             j++;
//             bucket[i]--;
//         }
//     }
// }
// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[]={402,56,32,35,56,78,99,111,27,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Array before sorting:\n");
//     print(arr,n);
//     bucket_sort(arr,n);
//     printf("Array after sorting:\n");
//     print(arr,n);
//     return 0;
// }


//Bucket sort(decending order)


// #include<stdio.h>
// int getmax(int a[],int n){
//     int max=a[0];
//     for(int i=1;i<n;i++){
//         if(max<a[i]){
//             max=a[i];
//         }
//         else{
//             continue;
//         }
//     }
//     return max;
// }
// int bucket_sort(int a[],int n){
//     int max=getmax(a,n);
//     int bucket[max];
//     for(int i=0;i<=max;i++){
//         bucket[i] = 0;
//     }
//     for(int i=0;i<n;i++){
//         bucket[a[i]]++;
//     }
//     for(int i=max,j=0;i>=0;i--){
//         while(bucket[i]>0){
//             a[j]=i;
//             j++;
//             bucket[i]--;
//         }
//     }
// }
// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[]={402,56,32,35,56,78,99,111,27,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Array before sorting:\n");
//     print(arr,n);
//     bucket_sort(arr,n);
//     printf("Array after sorting:\n");
//     print(arr,n);
//     return 0;
// }


//Comb sort(ascending order)


// #include<stdio.h>
// #include<math.h>
// int updategap(int n){
//     //devide gap by shrink value
//     //shrink value=1.3
//     int gap = (n/1.3);
//     if(gap<1){
//         return 1;
//     }
//     return gap;
// }
// int comb_sort(int a[],int n){
//     int gap=n;
//     int swap=1;
//     while(gap!=1||swap==1){
//         gap=updategap(gap);
//         swap=0;
//         for(int i = 0; i < n-gap; i++){
//             if(a[i]>a[i+gap]){
//                 int temp=a[i];
//                 a[i]=a[i+gap];
//                 a[i+gap]=temp;
//                 swap=1;
//             }
//             else{
//                 continue;
//             }
//         }
//     }
// }
// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[]={402,56,32,35,78,99,111,27,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Array before sorting:\n");
//     print(arr,n);
//     comb_sort(arr,n);
//     printf("Array after sorting:\n");
//     print(arr,n);
//     return 0;
// }


//Comd sort(decending order)


// #include<stdio.h>
// #include<math.h>
// int updategap(int n){
//     //devide gap by shrink value
//     //shrink value=1.3
//     int gap = (n/1.3);
//     if(gap<1){
//         return 1;
//     }
//     return gap;
// }
// int comb_sort(int a[],int n){
//     int gap=n;
//     int swap=1;
//     while(gap!=1||swap==1){
//         gap=updategap(gap);
//         swap=0;
//         for(int i = 0; i < n-gap; i++){
//             if(a[i]<a[i+gap]){
//                 int temp=a[i];
//                 a[i]=a[i+gap];
//                 a[i+gap]=temp;
//                 swap=1;
//             }
//             else{
//                 continue;
//             }
//         }
//     }
// }
// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[]={402,56,32,35,78,99,111,27,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Array before sorting:\n");
//     print(arr,n);
//     comb_sort(arr,n);
//     printf("Array after sorting:\n");
//     print(arr,n);
//     return 0;
// }


//Heap sort(ascending order)


// #include<stdio.h>
// void print(int a[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
// }
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// void heapify(int a[],int n,int i){
//     int largest=i;
//     int left =2*i+1;
//     int right =2*i+2;
//     if(left<n && a[left]>a[largest]){
//         largest=left;
//     }
//     if(right<n && a[right]>a[largest]){
//         largest=right;
//     }
//     if(largest!=i){
//         swap(&a[i],&a[largest]);
//         heapify(a,n,largest);
//     }
// }
// void heap_sort(int a[],int n){
//     for(int i=(n/2)-1;i>=0;i--){
//         heapify(a,n,i);
//     }
//     for(int i=n-1;i>=0;i){
//         swap(&a[i],&a[0]);
//         heapify(a,i,0);
//     }
// }
// int main(){
//     int arr[]={402,33,453,345,22,56,78,19,86};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     //printf("Array before sorting:\n");
//    // print(arr,n);
//     heap_sort(arr,n);
//     printf("Array after sorting:\n");
//     print(arr,n);
//     return 0;
// }


