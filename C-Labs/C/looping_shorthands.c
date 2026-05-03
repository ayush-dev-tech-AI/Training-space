#include <stdio.h>
int main(){
    int n , i = 1;
    printf("Enter The Number : ");
    scanf("%d", &n);
    printf("output:\n");
    level:
    if(i > n){
        goto end; // using goto statement to exit the loop
    }
    (i % 2 == 0 && i % 3 == 0) ? printf("EvenThree\n") : (i%2==0) ? printf("Even\n") : (i%3==0) ? printf("Three\n") : printf("%d\n", i); // if-else statement in one line using ternary operator
    i++;
    goto level; // using goto statement to create a loop
    end:
    return 0;
}