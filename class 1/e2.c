#include<stdio.h>
/*The distance between Mirpur and Ashulia is input through the keyboard. 
Write a program to convert and print this distance in meter, feet, inches and centimeters.*/
int main () {
    double km, meter, feet, inches, centimeters;
    printf("Enter the distance between Mirpur and Ashulia :");
    scanf("%lf", &km);
    
    meter = km * 1000; // 1km = 1000m
    feet = km * 3280; // 1km = 3280ft
    inches = km * 339370.079; // 1km = 39370.079in
    centimeters = km * 100000; // 1km = 10000cm



    printf("meter = %lf\n feet = %lf\n inches = %lf\n centimeters = %lf\n", meter, feet, inches, centimeters);

    return 0;
}