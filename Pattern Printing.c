//patterns


//no:-1
#include<stdio.h>
int main(){
    for(int i=4;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        for(int k=11-(2*i);k>=1;k--){
            printf("* ");
        }
        for(int m=2*i-1;m>=1;m--){
            printf("  ");
        }
        for(int k=11-(2*i);k>=1;k--){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=10;i>=1;i--){
        for(int j=11-i;j>=1;j--){
            printf("  ");
        }
        for(int k=2*i-1;k>=1;k--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


// no:-2
#include<stdio.h>
int main(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int k=2*(5-i);k>=1;k--){
           printf(" ");
        }
        for(int n=i;n>=1;n--){
            printf("*");
        }
        printf("\n");
    }
    for(int n=2;n<=5;n++){
        for(int m=1;m<=n;m++){
            printf("*");
        }
        for(int l=2*(5-n);l>=1;l--){
            printf(" ");
        }
        for(int p=n;p>=1;p--){
            printf("*");
        }
        printf("\n");
    }
}


// no:-3
