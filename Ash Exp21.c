#include<stdio.h>

int convert_bin(int dec){

    int bin = 0,rem;
    int i = 1;
    int x = dec;

    while(x > 0){
        rem = x%2;
        bin = bin + rem*i;
        i*=10;
        x = x/2;
    }

    return bin;
}
int main(){

    int dec;

    while(1){
        printf("Enter Decimal Number : ");
        scanf("%d", &dec);

        printf("Binary Equivalent : %d", convert_bin(dec));
        printf("\n\n");
    }

    return 0;
}