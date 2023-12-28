#include <stdio.h>
int main()
{
    val(5);
    val(7);
}

void val(int x)
{
    static int h = 1;
    int k = 3;
    printf("the value of h =%d\n", h);

    printf("the value of k =%d\n", k);
    h++;
    k++;
}