// 2 stage pipelining for addition and subtraction 

#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

void pipeline(int inst_){

    int space = 0;
    for(int i = 0;i<inst_;i++){
        printf("Inst %d :\t", i+1);
        for(int j = 0; j<space; j++){
            printf(" ");
        }
        printf("|   IF  |   E   |\n");
        for(int j = 0; j<space; j++){
            printf(" ");
        }
        printf("        \t-----------------\n");
        space+=8;
    }
}

int main(){

    int operand, operator1, operator2, i=0;
    int clock_time;
    int clock = 0;
    int inst_;
    int inst_2;
    int stage_ = 2; // for two stage pipeline

    printf("Clock time of the System : ");
    scanf("%d", &clock_time);

    printf("No. Of Instructions : ");
    scanf("%d", &inst_);

    inst_2 = inst_;

    int result[inst_];

    while(inst_ > 0){
        printf("\nINSTRUCTION %d Details : \n", i+1);
        printf("---------------------------\n");

        printf("Enter Operators : \n");
        scanf("%d", &operator1);
        scanf("%d", &operator2);

        printf("Enter Operand : | 1. Add | 2. Subtract | \n");
        scanf("%d",&operand);

        if(operand == 1){
            result[i] = add(operator1,operator2);
        }
        else if(operand == 2){
            result[i] = sub(operator1,operator2);
        }
        i++;
        inst_--;
    }

    printf("\nPIPELINE : \n");
    printf("-----------\n");

    pipeline(inst_2);

    printf("\nRESULTS : \n");
    printf("-----------\n");
    for(int i = 0;i<inst_2;i++){
        printf("I%d : %d \n",i+1,result[i]);
    }

    int Et_ = stage_ + (inst_2 - 1);

    printf("\nTotal Cycles Required : %d\n", Et_);
    printf("\nExecution Time : %d\n\n", Et_*clock_time); 

    return 0;
}