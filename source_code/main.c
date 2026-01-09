#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "math_op_.h"
#define N 20

int main(){

    char repetition[N];

    do{
    int ops;
    float num1;
    float num2;

printf("This is a calculator that can simply handle task like: \n ");
printf("\n 1. addition \n 2. subtraction \n 3. multiplication \n 4. Division \n ");
printf("Enter your choice: \t ");
scanf("%d", &ops);

printf("Enter the first number: \t");
scanf("%f", &num1);
printf("Enter the second number: \t");
scanf("%f", &num2);

if(ops == 1){
    add(num1, num2);
}
else if(ops == 2){
    subtract(num1, num2);
}
else if(ops == 3){
    multiply(num1, num2);
}
else if(ops == 4){
    if (num2 == 0){
            printf("\t Maths Error!!!, Division by Zero %.f is impossible", num2);
    }
    else{
        divide(num1, num2);
    }
}

printf("\n Do you wish to continue the program(yes/ no): \t");
getchar();
fgets(repetition, N, stdin);
repetition[strcspn(repetition, "\n")] = 0;

 }while((strcmp(repetition, "yes") == 0)|| (strcmp(repetition, "YES") == 0));

return 0;
}
