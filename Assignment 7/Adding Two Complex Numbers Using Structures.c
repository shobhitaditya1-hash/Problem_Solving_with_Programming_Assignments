#include <stdio.h>
struct Complex
{
    float real;
    float imag;
};
struct Complex addComplex(struct Complex a, struct Complex b)
{
    struct Complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}
int main()
{
    struct Complex c1 = {3.0, 5.0};
    struct Complex c2 = {2.0, 4.0};
    struct Complex result;
    result = addComplex(c1, c2);
    printf("(%.1f + %.1fi) + (%.1f + %.1fi) = %.1f + %.1fi\n", c1.real, c1.imag, c2.real, c2.imag, result.real, result.imag);
    return 0;
}