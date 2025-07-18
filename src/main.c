#include <stdio.h>

float calculate_bmi(float weight, int height)
{
    return 10000 * (weight / (height * height));
}

float bmi_result()
{
    float weight;
    int height;

    printf("How much do you weight in kilograms: ");
    scanf("%f", &weight);
    printf("How tall are you in centimeters: ");
    scanf("%d", &height);

    return calculate_bmi(weight, height);
}

void show_bmi(float bmi)
{

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Thinness\n");
    }
    else if (bmi > 18.5 & bmi < 24.99)
    {
        printf("Normal\n");
    }
    else if (bmi > 25 & bmi < 29.99)
    {
        printf("Overweight\n");
    }
    else if (bmi > 30 & bmi < 39.99)
    {
        printf("Obesity\n");
    }
    else
    {
        printf("Severe obesity\n");
    }

    return;
}

int main()
{
    int end = 0;

    do
    {
        printf("------ BMI calculator -----\n");

        const float bmi = bmi_result();
        show_bmi(bmi);

        printf("Do you want to end the program?\n");
        printf("(1)-Yes ----- (0)No\n");
        scanf("%d", &end);

    } while (end == 0);

    return 0;
}
