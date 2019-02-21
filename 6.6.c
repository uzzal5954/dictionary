#include <stdio.h>

int main()
 {
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;
    for(i = 9, j = 0; i < 10; i++, j--) {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for(i = 0; i < 10; i++) {
        printf("%d\n", ara[i]);
    }
    return 0;
 }
//https://github.com/zamanrabeen671/dictionary/blob/master/6.6.c?fbclid=IwAR0dvD1D0qjSqP--dZWAgDAPwFuq0B6Pde0nCXMsnx4YUFcwwSJfZNYVeCc
