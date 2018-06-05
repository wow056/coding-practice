#include <stdio.h>
#include <math.h>

int main()
{
    int N, K;
    scanf("%d", &N);
    K = (-1 + sqrt(1 - 4 * 1 * (1 - N))) / 2;
    printf("%d", K);
    return 0;
}