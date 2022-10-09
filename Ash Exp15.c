// 3 stage pipelining for AND, OR and NAND

#include<stdio.h>

void pipeline(int inst_){

    int space = 0;
    for(int i = 0;i<inst_;i++){
        printf("Inst %d :\t", i+1);
        for(int j = 0; j<space; j++){
            printf(" ");
        }
        printf("|   IF  |   D   |   E   |\n");
        for(int j = 0; j<space; j++){
            printf(" ");
        }
        printf("        \t-------------------------\n");
        space+=8;
    }
}

int main(){

    int operator, operand1, operand2, i=0;
    int clock_time;
    int clock = 0;
    int inst_;
    int inst_2; // will store the back-up of inst_
    int stage_ = 3;

    printf("Clock time of the System : ");
    scanf("%d", &clock_time);

    printf("No. Of Instructions : ");
    scanf("%d", &inst_);

    inst_2 = inst_;

    int result[inst_];

    while(inst_ > 0){
        printf("\nINSTRUCTION %d Details : \n", i+1);
        printf("---------------------------\n");

        printf("Enter Operands : \n");
        scanf("%d", &operand1);
        scanf("%d", &operand2);

        printf("Enter Operator : | 1. AND | 2. OR | 3. NAND | \n");
        scanf("%d",&operator);

        if(operator == 1){
            result[i] = operand1 & operand2 ;
        }
        else if(operator == 2){
            result[i] = operand1 | operand2;
        }
        else if(operator == 3){
            result[i] = ~(operand1 & operand2);
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