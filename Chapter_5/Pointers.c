//Variable that stores memory address of another variable
#include <stdio.h>

int main() {
int i=5;
int j= &i;
printf("The address of i is %p\n", &i);
printf("The address of i is %p\n", j);
printf("The value at address j is %d\n", *(&i));
    return 0;
}