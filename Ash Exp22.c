#include<stdio.h>

int convert_oct(int dec){

    int bin = 0,rem;
    int i = 1;
    int x = dec;

    while(x > 0){
        rem = x%8;
        bin = bin + rem*i;
        i*=10;
        x = x/8;
    }

    return bin;
}
int main(){

    int dec;

    while(1){
        printf("Enter Decimal Number : ");
        scanf("%d", &dec);

        printf("Octal Equivalent : %d", convert_oct(dec));
        printf("\n\n");
    }

    return 0;
}