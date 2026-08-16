//miscelaneous exercise


/*#include<stdio.h>
#include<math.h>
int main(){
    int n,arm,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        arm=n%10;
        sum+=pow(arm,3);
        n/=10;
    }
    if(sum==n){
        printf("%d is a arm strong number",sum);
    }
    else{
        printf("%d is not a armstrong number",sum);
    }
    return 0;
}*/
// #include <stdio.h>
// int main() {
//     int num, originalNum, remainder, result = 0;
//     printf("Enter a three-digit integer: ");
//     scanf("%d", &num);
//     originalNum = num;
//     while (originalNum != 0) {
//        // remainder contains the last digit
//         remainder = originalNum % 10;      
//        result += remainder * remainder * remainder;       
//        // removing last digit from the orignal number
//        originalNum /= 10;
//     }
//     if (result == num)
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);
//     return 0;
// }



// #include<stdio.h>
// #include<math.h>
// int checkprime();
// int checkarmstrong();
// int checkperfect();
// int checkprime(int n){
//     int p=0;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             p=1;
//             break;
//         }
//     }
//     if(p==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int checkarmstrong(int n){
//     int sum=0,x;
//     int original=n;
//     while(original!=0){
//         x=original%10;
//         sum+=x*x*x;
//         original/=10;
//     }
//     if(sum==n){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int checkperfect(int n){
//     int sum=0;
//     for(int i=1;i<=n/2;i++){
//         if(n%i==0){
//             sum+=i;
//         }
//     }
//     if(sum==n&&n>0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//    int n;
//    printf("Enter the number:");
//    scanf("%d",&n);
//    if(checkprime(n)){
//         printf("%d is a prime number\n",n);
//    }
//    else{
//         printf("%d is not a prime number\n",n);
//    }  
//    if(checkarmstrong(n)){
//         printf("%d is a armstrong number\n",n);
//    }
//    else{
//         printf("%d is not a armstrong number\n",n);
//    }  
//    if(checkperfect(n)){
//         printf("%d is a perfect number",n);
//    }
//    else{
//         printf("%d is not a perfect number",n);
//    }
//    return 0; 
// }
