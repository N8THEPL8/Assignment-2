// Nathan Starr

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double square(double l);

double sphere(double r);

double cube(double l);


int main()
{

    int choice;
    double value;
    do
    {
        printf("\n1) Compute the area of a square\n2) Compute the volume of a sphere\n3) Compute the surface area of a cube\n4) Quit\nEnter an option: ");
        scanf("%d", &choice);
    switch(choice)
    {


    case 1:
        printf("\nEnter the side length (cm): ");
        scanf("%lf",&value);
        printf("\nArea of the square: %.2f(cm)\n", square(value));
        break;


    case 2:
        printf("\nEnter the radius (cm): ");
        scanf("%lf",&value);
        printf("\nVolume of t sphere: %.2f (cm)\n", sphere(value));
        break;


    case 3:
        printf("\nEnter the edge of the cube: ");
        scanf("%lf",&value);
        printf("\nSurface area of the cube: %.2f (cm)\n", cube(value));
        break;

    case 4:
        printf("\ngoodbye!");
        break;
    }

    } while (choice != 4);
}


double square(double l) {return l*l;}

double sphere(double r) {return r *r*r* 3.141592653589793238 * 4 / 3;}

double cube(double l) {return l*l*6;}
