// include <stdio.h>

// int main(){
//     float height, weight, b;

//     printf("Enter height (in meters): \n");
//     scanf("%f", &height);

//     printf("Enter weight (in kilograms): \n");
//     scanf("%f", &weight);

//     if (height <= 0) {
//         printf("Height must be greater than zero.\n");
//         return 1;
//     }
//     if (weight <= 0) {
//         printf("Weight must be greater than zero.\n");
//         return 1;
//     }

//     b = weight / (height * height);

//     if (b <= 15.0) {
//         printf("BMI is %.2f \nStarvation.\n", b);
//     } 
//     else if (b <= 17.5) { 
//         printf("BMI is %.2f \nAnorexic.\n", b);
//     } 
//     else if (b <= 18.5) { 
//         printf("BMI is %.2f \nUnderweight.\n", b);
//     } 
//     else if (b <= 24.9) {
//         printf("BMI is %.2f \nIdeal.\n", b);
//     } 
//     else if (b <= 29.9) {
//         printf("BMI is %.2f \nOverweight.\n", b);
//     } 
//     else if (b <= 39.9) {
//         printf("BMI is %.2f \nObese.\n", b);
//     } 
//     else {
//         printf("BMI is %.2f \nMorbidly Obese.\n", b);
//     }

//     return 0;
// }

#include <stdio.h>

float bmi(
    float weight, float height,float bmi1) {
     bmi1=weight / (height * height);
     return bmi1;
}

void classifyBMI(float bmi) {
    printf("BMI is %.2f\n", bmi);
    
    if (bmi <= 15) printf("Starvation\n");
    else if (bmi <= 17.5) printf("Anorexic\n");
    else if (bmi <= 18.5) printf("Underweight\n");
    else if (bmi <= 24.9) printf("Ideal\n");
    else if (bmi <= 29.9) printf("Overweight\n");
    else if (bmi <= 39.9) printf("Obese\n");
    else printf("Morbidly Obese\n");
}

int main() {
    float height, weight;
    printf("Enter height in meters: ");
    scanf("%f", &height);
    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    if (height <= 0 || weight <= 0) {
        printf("Height and weight must be positive.\n");
        return 1;
    }

    float bmi = calculateBMI(weight, height);
    classifyBMI(bmi);

    return 0;
}
