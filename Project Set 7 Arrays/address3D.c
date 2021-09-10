#include <stdio.h>
int main()
{
    int array3d[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            for (size_t k = 0; k < 2; k++)
            {
                printf("%u\n", &array3d[i][j][k]);
            }
        }
    }

    return 0;
}