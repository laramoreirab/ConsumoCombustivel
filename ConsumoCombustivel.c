#include <stdio.h>
int main()
{
    int T,V;
    float C;
    scanf("%d", &T);
    scanf("%d", &V);
    C=(float)T*(float)V/12;
    printf("%.3f litros",C);
    return 0;
}