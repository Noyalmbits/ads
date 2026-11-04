#include <stdio.h>
int main() {
    int num, rem, sum = 0; 
    printf("Enter an number: ");
    scanf("%d", &num);  
    int original= num;  
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        rem = num % 10;   
        sum += rem;      
        num = num / 10;        
    }
    printf("The sum of the digits of %d is: %d\n", original, sum);

    return 0;
}

