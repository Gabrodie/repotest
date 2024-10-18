#include <stdio.h>

const char* odd(int a){
    if (a % 2 == 0){
        return "Even";
    }else return "Odd";
}

int main(void){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("%s\n", odd(num));
    return 0;
}
