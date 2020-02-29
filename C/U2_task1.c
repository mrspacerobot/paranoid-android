#include <stdio.h>

void sequence(int n){
    if (n == 1){
        printf("%i\n", n);
    }
    else if (n%2==1){
        printf("%i\n", n);
        n = 3*n+1;
        sequence(n);
    }
    else{
        printf("%i\n", n);
        n = n/2;
        sequence(n);
    }
}

int main(){
    int i;
    printf("Print a number ");
    scanf("%d", &i);
    printf("\n");
    sequence(i);

    return 0;
}