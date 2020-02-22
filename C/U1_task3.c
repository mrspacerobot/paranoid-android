#include <stdio.h>

int main(){
    //Erster Input
    int a[1000];
    int i = 0;
    printf("Values of A separated by spaces (non-number to stop): ");
    while (scanf("%d", &a[i]) == 1) {
    i++; }
    scanf("%*s");

    //Zweiter Input
    int b[1000];
    int j = 0;
    printf("Values of B separated by spaces (non-number to stop): ");
    while (scanf("%d", &b[j]) == 1) {
    j++; }
    scanf("%*s");

    //Code:
    int l = 0;
    printf("Pairs: ");
    for (int k = 0; k < i; k++){
        printf("(%i,", a[k]);
        int lsg = 0;
        while (b[l] == a[k]){
            lsg++;
            l++;
        }
        printf("%i) ", lsg);
    }

    return 0;
}