#include <stdio.h>

int main() {
    int cgpa[] = {7, 8, 8, 9};
    for (int i=0;  i<3; i++){
        printf("The value of marks at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}