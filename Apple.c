#include <stdio.h>
int main(void) {
    const double a = 5000.0; //beaker
    const double b = 250.0; //pour per one
    double c; //apple
    double d = 0.0; //volume
    int pours = 0; //time the pour
    printf("Enter the apple weight (g) :  ");
    if (scanf("%lf", &c) != 1) {
        printf("Input wrong \n");
        return 1;
    }

    if (c <= 0) {
        printf("the weight is worng \n");
        return 1;
    }

    printf("\n start pour the water in beaker %.0f ml...\n", b);

    while (d < c && d < a) {
        d += b;
        pours++;
        printf("Pour  %d: Volume of water = %.0f ml\n", pours, d);
    }

    if (d >= c && d <= a) {
        printf("\n apple start floating afer pour of water %d time (Volume of water %.0f ml)\n",
               pours, d);
    } else {
        printf("\n Water is full of %.0f ml this apple can't floating \n",
               a);
    }

    return 0;
}

//apple must only have the weight >= volum of water to make the aplple floating 
//
