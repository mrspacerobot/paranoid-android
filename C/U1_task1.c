#include<stdio.h>
int strLength(char s[]){
    int lsg = 0;
    for (int i = 0; s[i] != 0; i++){
        lsg++;
    }

    return lsg;
}

int main(){
    char input[100];
    printf("Please enter a string: ");
    scanf ("%[^\n]%*c", input);
    printf("String Length: %i\n", strLength(input));
}