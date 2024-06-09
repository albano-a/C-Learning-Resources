#include <stdio.h>

#define FRACTION (4.0f/3.0f)

int main(void) {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    float volume = FRACTION * 3.14159 * radius * radius * radius;

    printf("The volume of a sphere with radius %.2f is %.2f", radius, volume);

}
