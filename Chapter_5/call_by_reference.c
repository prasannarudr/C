// Address of variable are passed into the function
#include <stdio.h>
int sum(int *, int *);
int sum(int *a, int *b){
    *a = 7;
    return (*a + *b);
}

int main() {

    int x= 6, y=4;
    printf("The sum is %d\n", sum(&x,&y));
    printf("The value of x is %d", x);
    return 0;
}