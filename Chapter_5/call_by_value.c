//Value of arguments are passed to function
#include <stdio.h>
int sum(int, int);
int sum(int a, int b){
    return a+b;
}

int main() {

    int a= 6, b=4;
    printf("The sum is %d\n", sum(a,b));
    return 0;
}