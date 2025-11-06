#include <stdio.h>

int main(){
    float height, weight, b;

    printf("Enter height (in meters): \n");
    scanf("%f", &height);

    printf("Enter weight (in kilograms): \n");
    scanf("%f", &weight);

    if (height <= 0) {
        printf("Height must be greater than zero.\n");
        return 1;
    }
    if (weight <= 0) {
        printf("Weight must be greater than zero.\n");
        return 1;
    }

    b = weight / (height * height);

    if (b <= 15.0) {
        printf("BMI is %.2f \nStarvation.\n", b);
    } 
    else if (b <= 17.5) { 
        printf("BMI is %.2f \nAnorexic.\n", b);
    } 
    else if (b <= 18.5) { 
        printf("BMI is %.2f \nUnderweight.\n", b);
    } 
    else if (b <= 24.9) {
        printf("BMI is %.2f \nIdeal.\n", b);
    } 
    else if (b <= 29.9) {
        printf("BMI is %.2f \nOverweight.\n", b);
    } 
    else if (b <= 39.9) {
        printf("BMI is %.2f \nObese.\n", b);
    } 
    else {
        printf("BMI is %.2f \nMorbidly Obese.\n", b);
    }

    return 0;
}