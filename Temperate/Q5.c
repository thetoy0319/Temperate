#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    printf("Factorial of %d = %lld", num, factorial);
    
    return 0;
}
