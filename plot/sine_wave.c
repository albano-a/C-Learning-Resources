#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define NUM_POINTS 100
#define PI 3.14159265358979323846

int main() {
    FILE *gp = popen("gnuplot -persistent", "w");
    if (gp == NULL) {
        fprintf(stderr, "Error opening pipe to gnuplot.\n");
        return 1;
    }

    fprintf(gp, "set title 'Sine Wave'\n");
    fprintf(gp, "set xlabel 'x'\n");
    fprintf(gp, "set ylabel 'sin(x)'\n");
    fprintf(gp, "plot '-' with lines\n");

    for (int i = 0; i <= NUM_POINTS; i++) {
        double x = (2 * PI * i) / NUM_POINTS;
        double y = sin(x);
        fprintf(gp, "%lf %lf\n", x, y);
    }

    fprintf(gp, "e\n");
    pclose(gp);

    return 0;
}
