#include<stdio.h>
int main()
{float w,h;
 printf("enter the height (in m) and weight (in kg) of the body: \n");
 scanf("%f%f",&h,&w);
 float b=w/(h*h);
 char t;
 printf("BMI value is %d\n",b);
 if(b>=25.0)
 printf("THE PERSON IS OVERWEIGHT");
 else if(b>=18.5)
 printf("THE PERSON IS HEALTHY");
 else
 printf("THE PERSON IS UNDERWEIGHT");
 return 0;
}
