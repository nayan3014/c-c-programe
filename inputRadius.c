#include<stdio.h>
void calculateCircleProperties(float radius, float *area, float *circumference)
{
    float pi = 3.14;

    // calculate area
    *area = pi * radius * radius;

    // calculate  circumference
    *circumference = 2 * pi * radius;
}

int main()
 {
float radius, area , circumference;
printf("Enter the radius of the circle: ");
scanf("%f", &radius);

// call the function
calculateCircleProperties(radius, &area, &circumference);

printf("area of the circcle: %.2f\n", area);
printf("circumference of the circle: %.2f\n", circumference);

return 0;


 }