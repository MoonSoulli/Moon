#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int isPrime(int n) { 
        int i;
        for (i = 2; i <= num/2; i++){
            if (num % i == 0){
                return 0;
            }
        }
    
    }
    return 1;
}