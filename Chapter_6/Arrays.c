#include <stdio.h>

int main() {
    int marks[5]; // reserve 90 elements space
    printf("Enter marks of 5 student:");

    for( int i=0; i<5; i++){
        scanf("%d", &marks[i]);
    }
    for( int i=0; i<5;i++){
        printf("The value of marks at index %d is %d\n", i,marks[i]);
    }
    //all the way till marks 89
    return 0;
}