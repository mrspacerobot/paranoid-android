#include <stdio.h>
#include <stdbool.h>
int strLength(char s[]){
    int lsg = 0;
    for (int i = 0; s[i] != 0; i++){
        lsg++;
    }
    return lsg;
}

bool isPalindrome(char s[]){
    int lange = strLength(s);
    if (lange == 0){
        return true;
    }
    for(int i = 0; i < lange; i++){
        if (s[i] != s[lange-(i+1)]){
            return false;
        }
    }
    return true;
}

int main(){
    char input[1000];
    int lange;
    int lsg;
    printf("Please enter a string to check if it is palindrome: ");
    scanf ("%[^\n]%*c", input);
    lsg = isPalindrome(input);
    if (lsg==1){
        printf("Result string: TRUE\n");
    }
    else{
        printf("Result string: FALSE\n");
    }

    return 0;
}