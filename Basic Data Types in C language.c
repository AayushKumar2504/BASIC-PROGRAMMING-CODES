#include <iostream>

int main() {
    int i;
    long l;
    char ch;
    float f;
    double d;

    // Input
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);

    // Output
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", ch);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);

    return 0;
}
