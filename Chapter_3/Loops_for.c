#include <stdio.h>

int main() {
    //for(initialisation,condition,updation)
    // for(int i=0; i<=10; i=i+1){
    //     printf("%d\n",i);
    // }
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
    printf("%d\n",i);
    }
    return 0;
}