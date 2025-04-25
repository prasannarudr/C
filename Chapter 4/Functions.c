// Functions- Block of code that performs particular task.

#include <stdio.h>
//Declaration prototype
void printHello();

int main() {
    printHello(); //Function call
    printHello();
    printHello();
    printHello();
    return 0;
}
// Function declaration
    void printHello(){
        printf("Hello!\n");
    }