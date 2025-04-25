// A variable is a container which stores a ‘value’

/* Rules for variables:
1. First character must be an alphabet or underscore (_)
2. No commas, blanks are allowed.
3. No special symbol other than (_) allowed.
4. Variable names are case sensitive.
*/

#include <stdio.h>

int main() {
    int num = 25;
    char star = "*";
    int age = 19;
    float pi = 3.14; 
    printf("Hello \n"); // \n is used for printing in next line.
    printf("Hello \n");
    
//    printf("Age is %d \n", age); // used for printing different data types like integer(%d), real no.(%f), character (%c)
//    printf("Character is %c\n", star);
//    printf("Value of pi is %f", pi);
//
    scanf("%d", &age);
    printf("Age is %d", age);
    return 0;
}
