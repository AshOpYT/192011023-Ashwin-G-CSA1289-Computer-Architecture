#include<stdio.h>

int main(){
    float cpi, clock_rate, clock_time, inst_;

    printf("\nEnter CPI : ");
    scanf("%f", &cpi);

    printf("Enter Clock Time : ");
    scanf("%f", &clock_time);

    printf("Total No. of Instructions : ");
    scanf("%f", &inst_);

    float cpu_time = (cpi*clock_time*clock_time);

    printf("\nCPU Time : %0.2f\n", cpu_time);
    
}