#include    <stdio.h>

typedef struct s_complex
{
    double  real;
    double  i;
}   t_complex;

int main()
{
    t_complex   z;
    t_complex   c;

    double  tmp_real;

    z.real = 0;
    z.i = 0;

    c.real = 0.25;
    c.i = 0.4;

// 
    for (int i = 0; i < 10 ; i++)
    {
        //z = z^2 + c
        tmp_real = (z.real * z.real) - (z.i * z.i);
        z.i = 2 * z.real *z.i;
        z.real = tmp_real;

        //c value
        z.real += c.real;
        z.i += c.i;

        printf("interation n -> %d real %f imaginary %f\n", i, z.real, z.i);
    }
}