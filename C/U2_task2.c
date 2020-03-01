#include <stdio.h>
int times = 3; //Länge eingeben!!!!
int i = 0;
int lsg[10];

void binary(int n){
    if (times==n){
        lsg[i] = 0;
        i++;
        binary(n-1); //da muss mehrmals ausgegeben werden

        i = 0;
        lsg[i] = 1;
        i++;
        n = times;
        binary(n-1);
    }
    else if (n == 1){
        if (lsg[i-1] == 1){
            lsg[i] = 0;
            
        }
        else{
            lsg[i] = 0;
            //Ausgabe
            for (int j=0; j<=i; j++){
                printf("%i", lsg[j]);
            };
            printf("\n");
            lsg[i] = 1;
        }

        //Ausgabe
        for (int j=0; j<=i; j++){
            printf("%i", lsg[j]);
        };
        printf("\n");
        return;
    }

    else{
        if (lsg[i-1] == 1){
            lsg[i] = 0;
            i++;
            binary(n-1);
        }
        else{
            lsg[i] = 0;
            i++;
            binary(n-1);
            i--;
            lsg[i] = 1;
            i++;
            binary(n-1);
        }
    }
}

int main(){
    binary(times);

    return 0;
}