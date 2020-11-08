#include <stdio.h>
#include <math.h>
float sqrtf(float arg ); 
float calculateDistance(float number1, float number2, float number3, float number4);

int main(){
    float theAns;
    float num1, num2, num3, num4;
    printf("Tutorial 2 Q4 \n");
    printf("Give first decimal number: \n");
    scanf("%f", &num1);
    printf("Give second decimal number: \n");
    scanf("%f", &num2);
    printf("Give third decimal number: \n");
    scanf("%f", &num3);
    printf("Give fourth decimal number: \n");
    scanf("%f", &num4);
    theAns = calculateDistance(num1, num2, num3, num4);
    printf("%f", theAns);

return 0;    
}

float calculateDistance(float number1, float number2, float number3, float number4){
    float sum1;
    float sum2;
    float finalSum;
    float finalAns=0.0;
    sum1 = (number2 - number1)*(number2 - number1); 
    sum2 = (number4 - number3)*(number4 - number3);
    finalSum = sum1 + sum2
    finalAns = sqrtf(finalSum);
return finalAns;    
}