#include<stdio.h>

int main(){
    float hits,misses;

    printf("\nEnter Total No. Of Hits : " );
    scanf("%f", &hits);

    printf("Enter Total No. Of Misses : ");
    scanf("%f", &misses);

    float hit_ratio = hits/(hits + misses) ;
    float hit_percentage = hit_ratio * 100 ;

    printf("HIT RATIO : %f \n", hit_ratio);
    printf("HIT PERCENTAGE : %f \n\n", hit_percentage);
}