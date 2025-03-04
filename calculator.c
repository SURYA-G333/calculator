#include <math.h>
#include <stdio.h>

// 1. Addition
void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
}

// Fill the rest of the functionality here!
// 2. Subtraction
void calcsubtraction() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a - b;
    printf("The difference is %d\n", result);
    }
// 3. Multiplication
void calcMultiplication()
{
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = a*b;
    printf("The product is %d\n", ans);
}
// 4. Division
// 5. Exponentiation

// 6. Sine
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);

    printf("The sine value is %f", answer);
}

//cosine
void calcos(){
    printf("\nEnter the angle in degrees:\n");
    float angle;
    scanf("%d",&angle);
    //convert degrees to radian 
    double radian = angle /  180.0 * 3.14;
    double answer = cos(radian);

    printf("The cos value is %f",answer);
}
   
void calcExpo() {
    float num,result;
    int exp;
    printf("Enter the number and its exponent:");
    scanf("%f,%d",&num,&exp);
    result=pow(num,exp);

    printf("%f raised to %d power is %f",num,exp,result);
}

// Fill the rest of the functionality here!
// 7. Cosine
// 8. Tangent
// 9. Floor
// 10. Ceiling
// 11. Round
// 12. Absolute value
void AbsoluteValue()
{
    printf("\nEnter an integer to find Absolute Value: ");
    int N;
    scanf("%d", &N);
    if (N < 0) {
        N = (-1) * N;
    }

    printf("The Absolute Value of the given integer is: %d ", N);
}

int main() {
    int choice;
    printf(
        "Welcome to the Cool Calculator program!\n\n"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division\n"
        "5. Exponentiation\n"
        "6. Sine\n"
        "7. Cosine\n"
        "8. Tangent\n"
        "9. Floor\n"
        "10. Ceiling\n"
        "11. Round\n"
        "12. Absolute value\n\n"
        "Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        // 1. Addition
        case 1:
            calcAddition();
            break;
        case 2:
            calcsubtraction();
            break;
        case 3:
            calcMultiplication();
            break;
        case 4:
        case 5:
            calcExpo();
            break;
        // 6. Sine
        case 6:
            calcSine();
            break;

        case 7:
            calcos();
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:AbsoluteValue();
                break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}
