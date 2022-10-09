// Binary to decimal conversion

#include<stdio.h>

int power(int a, int b){
    int p = 1;
    for(int i = 0;i<b;i++){
        p = p*a ;
    }
    return p;
}

int dec(int bin){
    int dec = 0,rem ,i=0;
    while(bin > 0){
        rem = bin%10;
        dec += rem*power(2,i);
        i++;
        bin/=10;
    }

    return dec;
}

int main(){

    int bin;
    while(1){
        printf("Enter a Binary Number : ");
        scanf("%d", &bin);

        printf("Decimal Equivalent : %d" , dec(bin));
        printf("\n\n");
    }

    return 0;
}