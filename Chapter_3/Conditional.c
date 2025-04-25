#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("The person is an adult");
    }
    else{
        printf("Not Adult!");
    }
    return 0;
}