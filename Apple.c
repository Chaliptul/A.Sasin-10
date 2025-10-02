#include <stdio.h>
int main(void) {
    const double BEAKER_CAPACITY = 5000.0; //beaker
    const double POUR = 250.0; //pour per one
    double weight_g; //apple
    double water_volume = 0.0; //volume
    int pours = 0; //time the pour
    printf("Enter the apple weight (g) :  ");
    if (scanf("%lf", &weight_g) != 1) {
        printf("Input wrong \n");
        return 1;
    }

    if (weight_g <= 0) {
        printf("the weight is worng \n");
        return 1;
    }

    printf("\n start pour the water in beaker %.0f ml...\n", POUR);

    while (water_volume < weight_g && water_volume < BEAKER_CAPACITY) {
        water_volume += POUR;
        pours++;
        printf("Pour  %d: Volume of water = %.0f ml\n", pours, water_volume);
    }

    if (water_volume >= weight_g && water_volume <= BEAKER_CAPACITY) {
        printf("\n apple start floating afer pour of water %d time (Volume of water %.0f ml)\n",
               pours, water_volume);
    } else {
        printf("\n Water is full of %.0f ml this apple can't floating \n",
               BEAKER_CAPACITY);
    }

    return 0;
}
