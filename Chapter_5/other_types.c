#include <stdio.h>

int main() {
char i='A';
int j= &i;
float k= 5.399;
float *k1= &k;
printf("The address of i is %p\n", &i);
printf("The address of i is %p\n", j);
printf("The value at address j is %c\n", *(&i));

printf("The address of k is %p\n", &k);
printf("The address of k is %p\n", k1);
printf("The value at address k is %f\n", *(&k));
    return 0;
}