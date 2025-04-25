#include <stdio.h>

int main() {
    // for(int i=5; i<=50; i++){
    //     if(i%2!=0){
    //     printf("%d\n",i);    
    //     }
    // }
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);

    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
      }
      printf("Final factorial = %d\n", fact);
    return 0;
}