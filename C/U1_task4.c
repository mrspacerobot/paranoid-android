#include <stdio.h>

int evenOddInsertionSort(int A[], int n){
    //Liste sortieren
    int zw;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n-1; j++){ //hier hab ich verbessert
            if (A[j]>A[j+1]){
                zw = A[j];
                A[j] = A[j+1];
                A[j+1] = zw;
            }
        }
    }
    //new arrays initialisieren
    int ar_even[500];
    int ar_odd[500];
    int x = 0;
    int y = 0;
    for (int i = 0; i<n; i++){
        if (A[i]%2 == 0){
            ar_even[x] = A[i];
            x++;
        }
        else{
            ar_odd[y] = A[i];
            y++;
        }
    }

    //even
    printf("Sorted even numbers: ");
    for (int i = 0; i<x; i++){
        printf("%i, ", ar_even[i]);
    }
    
    printf("\nSum of even numbers: ");
    int as = 0;
    for (int i = 0; i<x; i++){
        as = as + ar_even[i];
    }
    printf("%i", as);

    //odd
    printf("\nSorted odd numbers: ");
    for (int i = 0; i<y; i++){
        printf("%i, ", ar_odd[i]);
    }

    printf("\nSum of odd numbers: ");
    int df = 0;
    for (int i = 0; i<y; i++){
        df = df + ar_odd[i];
    }
    return df;
}

int main(){
    int a[1000];
    int i = 0;
    printf("Values of A separated by spaces (non-number to stop): ");
    while (scanf("%d", &a[i]) == 1) {
    i++; }
    scanf("%*s");
    
    printf("%i", evenOddInsertionSort(a, i));

    return 0;
}