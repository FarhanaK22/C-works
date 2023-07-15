#include<stdio.h>

float temp_convert(float x)
{
return ((x-32.0)*5.0/9.0);
}
int main()
{float f;
    printf("Enter temperature in Fahrenheit");
    scanf("\t%f",&f);
    printf("\nTemperature in Celcius\t: %0.2f",temp_convert(f));
    return 0;
}