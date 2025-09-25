#include <stdio.h>
int main (){
    int bilangan;
    printf("masukan bilangan: ");
    scanf("%d", &bilangan);
    if(bilangan <0){
        printf("Bilangan negatif");
    } else if (bilangan >0){
        printf("Bilangan positif");
    }else{
        printf("bilangan nol");
    }
    return 0;
    }

